#include "DetectorConstruction.hh"
#include "G4Material.hh"
#include "G4Box.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"

// Define standard density for materials (you can adjust these values)
G4double density_emulsion = 1.0 * g/cm3;  // g/cm³
G4double density_plastic = 1.2 * g/cm3;   // g/cm³
G4double density_lead = 11.34 * g/cm3;     // g/cm³
G4double density_wood = 0.8 * g/cm3;      // g/cm³ (typical for wood)

// Other material properties (you can adjust these values)
G4double wood_sizeX = 10.0 * cm;       // cm
G4double wood_sizeY = 10.0 * cm;       // cm
G4double wood_sizeZ = 1.0 * cm;        // cm
G4double wood_positionZ = -60.0 * cm;  // cm from the center of the world volume
G4double ecc_sizeX = 10.0 * cm;        // cm
G4double ecc_sizeY = 10.0 * cm;        // cm
G4double ecc_sizeZ = 0.043 * mm;       // cm
G4double lead_sizeX = 10.0 * cm;       // cm
G4double lead_sizeY = 10.0 * cm;       // cm
G4double lead_sizeZ = 0.1 * cm;        // cm

// Define positions of ECC and lead layers
G4double ecc_positionZ = 0.1;     // starting position of the first ECC layer
G4double lead_positionZ = 0.0;    // starting position of the first lead layer


DetectorConstruction::DetectorConstruction() {}

DetectorConstruction::~DetectorConstruction() {}

G4VPhysicalVolume* DetectorConstruction::Construct() {
	//Start nist manager to build or call materials
	G4NistManager *nist = G4NistManager::Instance();
	
	G4Material *worldMat = nist->FindOrBuildMaterial("G4_AIR");
	G4Material *wood = new G4Material( "wood", 0.7 * g/cm3, 10);
	
	
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
	
    // Define materials
    //G4Material *emulsion = new G4Material("Emulsion", density_emulsion, 2);
    //emulsion->AddElement(Ag, 1);
    //emulsion->AddElement(Br, 1);

    //G4Material *plastic = new G4Material("Plastic", density_plastic, 1);
    //plastic->AddElement(C, 1);
	//
    //G4Material *lead = new G4Material("Lead", density_lead, 1);
    //lead->AddElement(Pb, 1);
    
    wood ->AddElement(C, 50 *perCent);
    wood ->AddElement(O, 42 *perCent);
    wood ->AddElement(H, 6 *perCent);
    wood ->AddElement(N, 1 *perCent);
    wood ->AddElement(Ca, (0.16) *perCent);
    wood ->AddElement(K, (0.16) *perCent);
    wood ->AddElement(Na, (0.17) *perCent);
    wood ->AddElement(Mg, (0.17) *perCent);
    wood ->AddElement(Fe, (0.17) *perCent);
    wood ->AddElement(Mn, (0.17) *perCent);

    // World
    G4double world_size=100.0 * m;
	G4Box* solidWorld = new G4Box("World", 	0.5 * world_size, 0.5 * world_size,	0.5 * world_size);
	G4LogicalVolume* logicalWorld = new G4LogicalVolume(solidWorld, worldMat, "World");
	G4VPhysicalVolume* physicalWorld = new G4PVPlacement(0, G4ThreeVector(), logicalWorld, "World", 0, false, 0);

    // Wood block
    G4Box* woodBlockSolid = new G4Box("WoodBlock", wood_sizeX, wood_sizeY, wood_sizeZ);
    G4LogicalVolume* woodBlockLogical = new G4LogicalVolume(woodBlockSolid, wood, "WoodBlock");
    
    
    new G4PVPlacement(0, G4ThreeVector(0, 0, wood_positionZ), woodBlockLogical, "WoodBlock", logicalWorld, false, 0);

    // Construct ECC films and lead layers
    ConstructECCFilms(logicalWorld);

    return physicalWorld;
}

void DetectorConstruction::ConstructECCFilms(G4LogicalVolume* motherLogical) {
    G4NistManager *nist = G4NistManager::Instance();
    // Construct ECC films and lead layers
    G4Element *Ag = nist->FindOrBuildElement("Ag");
	G4Element *Br = nist->FindOrBuildElement("Br");
	G4Element *C = nist->FindOrBuildElement("C");
	G4Element *Pb = nist->FindOrBuildElement("Pb");
	
    G4Material *emulsion = new G4Material("Emulsion", density_emulsion, 2);
    emulsion->AddElement(Ag, 1);
    emulsion->AddElement(Br, 1);

    G4Material *plastic = new G4Material("Plastic", density_plastic, 1);
    plastic->AddElementByNumberOfAtoms(C, 1);

    G4Material *lead = new G4Material("Lead", density_lead, 1);
    lead->AddElementByNumberOfAtoms(Pb, 1);
    
    for (int i = 0; i < 57; ++i) {
        // ECC film
        G4Box* eccSolid = new G4Box("ECC", ecc_sizeX, ecc_sizeY, ecc_sizeZ);
        G4LogicalVolume* eccLogical = new G4LogicalVolume(eccSolid, emulsion, "ECC");
        new G4PVPlacement(0, G4ThreeVector(0, 0, ecc_positionZ + i * (ecc_sizeZ + lead_sizeZ)), eccLogical, "ECC", motherLogical, false, 0);

        // Lead layer
        G4Box* leadSolid = new G4Box("Lead", lead_sizeX, lead_sizeY, lead_sizeZ);
        G4LogicalVolume* leadLogical = new G4LogicalVolume(leadSolid, lead, "Lead");
        new G4PVPlacement(0, G4ThreeVector(0, 0, lead_positionZ + i * (ecc_sizeZ + lead_sizeZ) + ecc_sizeZ), leadLogical, "Lead", motherLogical, false, 0);
    }
}

