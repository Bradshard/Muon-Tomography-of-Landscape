#include "DetectorConstruction.hh"
#include "G4Material.hh"
#include "G4Box.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
//#include "G4TransportationManager.hh"

// Define world size
G4double world_size= 500 * cm;
// Define standard density for materials (you can adjust these values)
G4double density_emulsion = 1.0 * g/cm3;  // g/cm³
G4double density_plastic = 1.2 * g/cm3;   // g/cm³
//G4double density_lead = 11.34 * g/cm3;     // g/cm³


G4double air_sizeX = 100.0 * cm;       // cm
G4double air_sizeY = 100.0 * cm;       // cm
G4double air_sizeZ = 99.428 * cm;        // cm

G4double ecc_sizeX = 100.0 * cm;        // cm
G4double ecc_sizeY = 100.0 * cm;        // cm
G4double ecc_sizeZ = 0.0043 * cm;       // cm

G4double plastic_sizeX = 100.0 * cm;       // cm
G4double plastic_sizeY = 100.0 * cm;       // cm
G4double plastic_sizeZ = 0.02 * cm;        // cm

// Define positions of ECC and lead layers
G4double ecc_positionZ = ecc_sizeZ;     // starting position of the first ECC layer
G4double air_positionZ = air_sizeZ + 0.286*cm;// cm from the center of the world volume
G4double plastic_positionZ = ecc_positionZ + plastic_sizeZ;     // starting position of the first ECC layer


DetectorConstruction::DetectorConstruction() {}

DetectorConstruction::~DetectorConstruction() {}

G4VPhysicalVolume* DetectorConstruction::Construct() {
    //Start nist manager to build or call materials
    G4NistManager *nist = G4NistManager::Instance();
    
    G4Material *worldMat = nist->FindOrBuildMaterial("G4_AIR");
    
    
    // World
    
    G4Box* solidWorld = new G4Box("World",     0.5 * world_size, 0.5 * world_size,    0.5 * world_size);
    G4LogicalVolume* logicalWorld = new G4LogicalVolume(solidWorld, worldMat, "World");
    G4VPhysicalVolume* physicalWorld = new G4PVPlacement(0, G4ThreeVector(), logicalWorld, "World", 0, false, 0);


    // Construct ECC films and lead layers
    ConstructECCFilms(logicalWorld);

    return physicalWorld;
}

void DetectorConstruction::ConstructECCFilms(G4LogicalVolume* motherLogical) {
        
    G4NistManager *nist = G4NistManager::Instance();
    // Mat definition
    
    G4Element *Ag = nist->FindOrBuildElement("Ag");
    G4Element *Br = nist->FindOrBuildElement("Br");
    G4Element *C = nist->FindOrBuildElement("C");
    G4Element *Pb = nist->FindOrBuildElement("Pb");
    G4Element *O = nist->FindOrBuildElement("O");
    G4Element *H = nist->FindOrBuildElement("H");
    G4Element *N = nist->FindOrBuildElement("N");
    G4Element *Ca = nist->FindOrBuildElement("Ca");
    G4Element *K = nist->FindOrBuildElement("K");
    G4Element *Na = nist->FindOrBuildElement("Na");
    G4Element *Mg = nist->FindOrBuildElement("Mg");
    G4Element *Fe = nist->FindOrBuildElement("Fe");
    G4Element *Mn = nist->FindOrBuildElement("Mn");
    G4Element *Si = nist->FindOrBuildElement("Si");
    G4Element *Al = nist->FindOrBuildElement("Al");
    
    
    G4Material *emulsion = new G4Material("Emulsion", density_emulsion, 2);
    emulsion->AddElement(Ag, 1);
    emulsion->AddElement(Br, 1);

    G4Material *plastic = new G4Material("Plastic", density_plastic, 1);
    plastic->AddElementByNumberOfAtoms(C, 1);
    
    // Iterate through the layers
    for (int i = 0; i < 10; ++i) {
        // ECC film
        G4Box* eccSolid = new G4Box("ECC", ecc_sizeX, ecc_sizeY, ecc_sizeZ);
        G4LogicalVolume* eccLogical = new G4LogicalVolume(eccSolid, emulsion, "ECC");
        G4PVPlacement* eccPlacement = new G4PVPlacement(0, G4ThreeVector(0, 0, ecc_positionZ + i * (2 * ecc_sizeZ + plastic_sizeZ)), eccLogical, "ECC", motherLogical, false, 0);

        // Plastic layer
        G4Box* plasticSolid = new G4Box("Plastic", plastic_sizeX, plastic_sizeY, plastic_sizeZ);
        G4LogicalVolume* plasticLogical = new G4LogicalVolume(plasticSolid, plastic, "Plastic");
        G4PVPlacement* plasticPlacement = new G4PVPlacement(0, G4ThreeVector(0, 0, plastic_positionZ + i * (2 * ecc_sizeZ + plastic_sizeZ) ), plasticLogical, "Plastic", motherLogical, false, 0);

        // ECC film again
        G4Box* eccSolid2 = new G4Box("ECC2", ecc_sizeX, ecc_sizeY, ecc_sizeZ);
        G4LogicalVolume* eccLogical2 = new G4LogicalVolume(eccSolid2, emulsion, "ECC2");
        G4PVPlacement* eccPlacement2 = new G4PVPlacement(0, G4ThreeVector(0, 0, ecc_sizeZ + plastic_sizeZ + ecc_positionZ + i * (2 * ecc_sizeZ + plastic_sizeZ)), eccLogical2, "ECC2", motherLogical, false, 0);
    
    }
    
    // Air Block
    G4Box* airBlockSolid = new G4Box("airBlock", air_sizeX, air_sizeY, air_sizeZ);
    G4LogicalVolume* airBlockLogical = new G4LogicalVolume(soilBlockSolid, worldMat, "airBlock");
    G4PVPlacement* airBlockPlacement = new G4PVPlacement(0, G4ThreeVector(0,0, air_positionZ), airBlockLogical, "airBlock", motherLogical, false, 0);
    
    for (int i = 0; i < 10; ++i) {
        // ECC film
        G4Box* eccSolid3 = new G4Box("ECC3", ecc_sizeX, ecc_sizeY, ecc_sizeZ);
        G4LogicalVolume* eccLogical3 = new G4LogicalVolume(eccSolid3, emulsion, "ECC3");
        G4PVPlacement* eccPlacement3 = new G4PVPlacement(0, G4ThreeVector(0, 0, air_sizeZ + air_positionZ + ecc_positionZ + i * (2 * ecc_sizeZ + plastic_sizeZ)), eccLogical3, "ECC3", motherLogical, false, 0);

        // Plastic layer
        G4Box* plasticSolid2 = new G4Box("Plastic2", plastic_sizeX, plastic_sizeY, plastic_sizeZ);
        G4LogicalVolume* plasticLogical2 = new G4LogicalVolume(plasticSolid2, plastic, "Plastic2");
        G4PVPlacement* plasticPlacement2 = new G4PVPlacement(0, G4ThreeVector(0, 0, air_sizeZ+air_positionZ + plastic_positionZ + i * (2 * ecc_sizeZ + plastic_sizeZ) ), plasticLogical2, "Plastic2", motherLogical, false, 0);

        // ECC film again
        G4Box* eccSolid4 = new G4Box("ECC4", ecc_sizeX, ecc_sizeY, ecc_sizeZ);
        G4LogicalVolume* eccLogical4 = new G4LogicalVolume(eccSolid4, emulsion, "ECC4");
        G4PVPlacement* eccPlacement4 = new G4PVPlacement(0, G4ThreeVector(0, 0, air_sizeZ+air_positionZ + plastic_positionZ + ecc_sizeZ + i * (2 * ecc_sizeZ + plastic_sizeZ)), eccLogical4, "ECC4", motherLogical, false, 0);

    }
    // Perform overlap check on the mother physical volume
    //G4VPhysicalVolume* motherPhysical = G4TransportationManager::GetTransportationManager()->GetNavigatorForTracking()->GetWorldVolume();
    //motherPhysical->CheckOverlaps();

}

