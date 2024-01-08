// SteppingAction.cc
#include "SteppingAction.hh"
#include "G4Step.hh"
#include "G4RunManager.hh"
#include "G4AnalysisManager.hh"


SteppingAction::SteppingAction() {}

SteppingAction::~SteppingAction() {}

void SteppingAction::UserSteppingAction(const G4Step* step) {
    // Print information about each step
    G4Track* track = step->GetTrack();
    G4StepPoint* prePoint = step->GetPreStepPoint();
    G4StepPoint* postPoint = step->GetPostStepPoint();

    G4int trackID = track->GetTrackID();
    G4int stepNumber = track->GetCurrentStepNumber();
    G4double energy = track->GetKineticEnergy();
    
    //G4cout << "TrackID: " << trackID
    //       << " Step: " << stepNumber
    //       << " Energy: " << energy / MeV << " MeV"
    //       << " PrePosition: " << prePoint->GetPosition()
    //       << " PostPosition: " << postPoint->GetPosition()
    //       << G4endl;

    // Add your specific actions for each step here
    // Eg., perform calculations, store data, etc.
    
    
    trackID = track->GetTrackID();
    energy = track->GetKineticEnergy();

    // Perform actions based on the information
    
}
