// SteppingAction.cc
#include "SteppingAction.hh"
#include "G4Step.hh"
#include "G4RunManager.hh"
#include "G4AnalysisManager.hh"
#include <map>


SteppingAction::SteppingAction() {}

SteppingAction::~SteppingAction() {}


void SteppingAction::UserSteppingAction(const G4Step* step) {
    auto analysisManager = G4AnalysisManager::Instance();
    
    G4Track* track = step->GetTrack();
    G4int trackID = track->GetTrackID();
    G4int stepNumber = track->GetCurrentStepNumber();
    G4double energy = track->GetKineticEnergy();
    G4int parentID = track->GetParentID();
    
    G4ThreeVector momentum = track->GetMomentum();
    G4ThreeVector position = track->GetPosition();
    
    //        // Fill an ntuple with track information
    analysisManager->FillNtupleIColumn(0, eventID);
    analysisManager->FillNtupleDColumn(1, trackID);
    analysisManager->FillNtupleDColumn(2, parentID);
    analysisManager->FillNtupleDColumn(3, energy);
    analysisManager->FillNtupleDColumn(4, momentum.x());
    analysisManager->FillNtupleDColumn(5, momentum.y());
    analysisManager->FillNtupleDColumn(6, momentum.z());
    analysisManager->FillNtupleDColumn(7, position.x());
    analysisManager->FillNtupleDColumn(8, position.y());
    analysisManager->FillNtupleDColumn(9, position.z());
    analysisManager->AddNtupleRow(0);
    
    // Assuming you have a pointer to your material and it's named "Emulsion"
//    G4Material* emulsionMaterial = G4Material::GetMaterial("Emulsion");
//    // Map to store counts for each "ECC3" instance based on its z-coordinate
//    std::map<G4double, G4int> ecc3Counts;
//    std::map<G4double, G4int> ecc4Counts;
//
//    if (emulsionMaterial) {
//        // Get the volume of the pre-step point
//        G4VPhysicalVolume* preStepVolume = step->GetPreStepPoint()->GetTouchableHandle()->GetVolume();
//
//        // Check if the step is entering the volume of "ECC3"
//        if (preStepVolume->GetName() == "ECC3") {
//            G4AnalysisManager* analysisManager = G4AnalysisManager::Instance();
//
//            // Get the z-coordinate of the "ECC3" instance
//            G4double zPosition = preStepVolume->GetTranslation().z();
//            if (zPosition == 0.286 * CLHEP::cm ){
//                // Increment a counter for particles entering "ECC3"
//                ecc3Counts[zPosition]++;
//                
//                // Increment a counter for particles entering "ECC3"
//                analysisManager->FillNtupleIColumn(0, ecc3Counts[zPosition]);
//                analysisManager->FillNtupleDColumn(9, zPosition);
//                analysisManager->AddNtupleRow();
//            } 
//        }
//    }

    // Print information about each step (or add your specific actions)


}
