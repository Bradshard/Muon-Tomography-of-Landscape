#include "G4RunManager.hh"
#include "G4UImanager.hh"
#include "G4ParticleGun.hh"
#include "G4MuonMinus.hh"
#include "G4Box.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4NistManager.hh"
#include "G4SystemOfUnits.hh"

int main(int argc, char** argv)
{
  // Construct the Geant4 run manager
  G4RunManager* runManager = new G4RunManager; // G4RunManager object is responsible for coordination of the simulation

  // Construct the particle gun
  G4ParticleGun* particleGun = new G4ParticleGun(); // By this we create a new G4ParticleGun object
  particleGun->SetParticleDefinition(G4MuonMinus::Definition()); // We define a Muon- particle
  particleGun->SetParticleEnergy(100.*MeV); // We define its energy of being 100 MeV
  particleGun->SetParticlePosition(G4ThreeVector(0., 0., -10.*cm)); // We here define it being below 10cm of the target volume 
  particleGun->SetParticleMomentumDirection(G4ThreeVector(0., 0., 1.)); // the momentum Here we define it moves in Z direction.

  // Construct the world volume
  G4NistManager* nist = G4NistManager::Instance(); // We create a world volume here that is a large box which encompasses the entire simulation
  G4Box* worldBox = new G4Box("World", 50.*cm, 50.*cm, 100.*cm); // 50cm x 50cm x100cm  world craeted
  G4LogicalVolume* worldLV = new G4LogicalVolume(worldBox, nist->FindOrBuildMaterial("G4_AIR"), "World"); // We use Air as the material  and we use the GEANT4 NIST database
  // we create the logicalvolume which is the object for the world volume and is the container that defines the geometry and material properties of the volume
  G4VPhysicalVolume* worldPV = new G4PVPlacement(nullptr, G4ThreeVector(), worldLV, "World", nullptr, false, 0); // here we create a physicalvolume object
  // PhysicalVolume is a LogicalVolume instance that is placed in the simulation, here we place the world volume at the origin (0,0,0).

  // for other type of objects please refer to The National Institute of Standards and Technology (NIST) - https://webbook.nist.gov/chemistry/  

  // Construct the target volume
  G4Box* targetBox = new G4Box("Target", 1.*cm, 1.*cm, 1.*cm); // Here we create the target box, that is a small block of material that muons interact with
  // For this case the target dimensions are 1cm x 1cm x 1cm, and it uses G4_Graphite basically graphite as material from GEANT4 NIST database
  G4LogicalVolume* targetLV = new G4LogicalVolume(targetBox, nist->FindOrBuildMaterial("G4_GRAPHITE"), "Target"); // Again we create a Logical volume and the material type here.
  G4VPhysicalVolume* targetPV = new G4PVPlacement(nullptr, G4ThreeVector(0., 0., 10.*cm), targetLV, "Target", worldLV, false, 0); // We place the object 10 cm above the origin and is contained within the world volume

  // Construct the detector
  G4Box* detectorBox = new G4Box("Detector", 5.*cm, 5.*cm, 0.1*cm); // Here we create the detector which is 5cm x 5 cm x 0.1 cm
  G4LogicalVolume* detectorLV = new G4LogicalVolume(detectorBox, nist->FindOrBuildMaterial("G4_PLASTIC_SC_VINYLTOLUENE"), "Detector");
  // material that is used for the detector is again from GEANT4 NIST database and it is Plastic SC Vinyltoluene(recommended)
  G4VPhysicalVolume* detectorPV = new G4PVPlacement(nullptr, G4ThreeVector(0., 0., 20.*cm), detectorLV, "Detector", worldLV, false, 0);
  // We put our detector object above 20 cm of the origin on the z direction within the world volume.

  // Set the user action initialization
  runManager->SetUserInitialization(new MyActionInitialization(particleGun, targetLV, detectorLV));
  // responsible for initializing the actions that will be taken during the simulation.
  // we have a custom ActionInitialization class which is MyActionInitialization, takes particle gun, target volume,
  // detector volume as its arguments


  // Initialize the run manager
  runManager->Initialize(); // sets up the simulation and prepares for it to run.

  // Generate the muon beam
  particleGun->GeneratePrimaryVertex(runManager->GetCurrentEvent());

  // Initialize the Geant4 UI manager
  G4UImanager* uiManager = G4UImanager::GetUIpointer();

  // Set the number of events to run
  uiManager->ApplyCommand("/run/beamOn 1000");

  // Run the Geant4 simulation
  runManager->BeamOn(1000); // runs specificed number of events.

  // Delete the run manager and other objects
  delete runManager;
  delete particleGun;
  delete worldBox;
  delete worldLV;
  delete targetBox;
  delete targetLV;
  delete detectorBox;
  delete detectorLV;

  return 0;
}

//My code here generates muons with a beam gun
//and it shoots muons with an energy of 100 MeV from a position 10 cm below the target volume.
// The target volume I made is a 1 cm x 1 cm x 1 cm block of graphite located 10 cm above the origin.
// my simulation runs for 1000 events.

// int *p = nullptr;  pointer to int with null value
// char *q = nullptr; pointer to char with null value
// safe to use these they are type-safe so it means null pointer, represents a null pointer
// means it does not point to any valid memory location.