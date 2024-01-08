// RunAction.cc
#include "RunAction.hh"
#include "G4Run.hh"
#include "G4RunManager.hh"
#include "G4UnitsTable.hh"
#include "G4SystemOfUnits.hh"
#include "G4VisExecutive.hh"
#include "G4UIExecutive.hh"

RunAction::RunAction() {}

RunAction::~RunAction() {}

void RunAction::BeginOfRunAction(const G4Run* /*run*/) {
    // Create analysis manager
    auto analysisManager = G4AnalysisManager::Instance();
    
    // Create directories
    analysisManager->SetVerboseLevel(1);
    analysisManager->SetNtupleMerging(true);
		if (!analysisManager) {
		G4cerr << "Error: G4AnalysisManager is null." << G4endl;
		return;
		}
	// Set the output file name
    analysisManager->SetFileName("output.root");

    // Open the output file
    analysisManager->OpenFile();
    
    // Create the ntuple and its columns
    analysisManager->CreateNtuple("TrackInfo", "Track Information");
    analysisManager->CreateNtupleDColumn("EventID");
    analysisManager->CreateNtupleDColumn("TrackID");
    analysisManager->CreateNtupleDColumn("ParticleID");
    analysisManager->CreateNtupleDColumn("Energy");
    analysisManager->CreateNtupleDColumn("MomentumX");
    analysisManager->CreateNtupleDColumn("MomentumY");
    analysisManager->CreateNtupleDColumn("MomentumZ");
    analysisManager->CreateNtupleDColumn("PositionX");
    analysisManager->CreateNtupleDColumn("PositionY");
    analysisManager->CreateNtupleDColumn("PositionZ");
    analysisManager->FinishNtuple();
    
    
}

void RunAction::EndOfRunAction(const G4Run* run) {
    auto analysisManager = G4AnalysisManager::Instance();

    // Save histograms and ntuples
    analysisManager->Write();
    analysisManager->CloseFile();
}
