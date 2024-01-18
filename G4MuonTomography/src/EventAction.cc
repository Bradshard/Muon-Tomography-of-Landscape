// EventAction.cc
#include "EventAction.hh"
#include "G4Event.hh"
#include "G4RunManager.hh"
#include "G4AnalysisManager.hh"

EventAction::EventAction() : eventID(-1) {}  // Initialize eventID in the constructor

EventAction::~EventAction() {}

void EventAction::BeginOfEventAction(const G4Event* /*event*/) {
    // Initialize eventID at the beginning of each event
    eventID = 0;
}

void EventAction::EndOfEventAction(const G4Event* event) {
    auto analysisManager = G4AnalysisManager::Instance();

    // Increment eventID for each event
    ++eventID;
	
    // Fill an ntuple with track information
    G4int numTracks = event->GetNumberOfPrimaryVertex();
    for (G4int i = 0; i < numTracks; ++i) {
        G4PrimaryVertex* vertex = event->GetPrimaryVertex(i);
        G4PrimaryParticle* particle = vertex->GetPrimary();
//	
//        // Extract track information
//        G4int trackID = particle->GetTrackID();
//        G4int particleID = particle->GetPDGcode();
//        G4double energy = particle->GetKineticEnergy();
//        G4ThreeVector momentum = particle->GetMomentum();
//        G4ThreeVector position = vertex->GetPosition();
//	
//        // Fill an ntuple with track information
//        analysisManager->FillNtupleIColumn(0, eventID);
//        analysisManager->FillNtupleDColumn(1, trackID);
//        analysisManager->FillNtupleDColumn(2, particleID);
//        analysisManager->FillNtupleDColumn(3, energy);
//        analysisManager->FillNtupleDColumn(4, momentum.x());
//        analysisManager->FillNtupleDColumn(5, momentum.y());
//        analysisManager->FillNtupleDColumn(6, momentum.z());
//        analysisManager->FillNtupleDColumn(7, position.x());
//        analysisManager->FillNtupleDColumn(8, position.y());
//        analysisManager->FillNtupleDColumn(9, position.z());
//        analysisManager->AddNtupleRow(0);
    }
}
