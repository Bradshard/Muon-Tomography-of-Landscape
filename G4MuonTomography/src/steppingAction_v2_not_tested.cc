// SteppingAction_v2_not_tested.cc
#include "SteppingAction.hh"
#include "G4Step.hh"
#include "G4RunManager.hh"
#include "TFile.h"
#include "TTree.h"
#include "TRandom.h"  // Include ROOT random number generator

SteppingAction::SteppingAction() : particleCount(0) {
    // Open a ROOT file and create a TTree to store the data
    rootFile = new TFile("output.root", "RECREATE");
    tree = new TTree("particleData", "Particle Data");

    // Add branches to the TTree
    tree->Branch("TrackID", &trackID, "TrackID/I");
    tree->Branch("StepNumber", &stepNumber, "StepNumber/I");
    tree->Branch("Energy", &energy, "Energy/D");
    tree->Branch("PrePosition", prePosition, "PrePosition[3]/D");
    tree->Branch("PostPosition", postPosition, "PostPosition[3]/D");
}

SteppingAction::~SteppingAction() {
    // Write and close the ROOT file
    rootFile->cd();
    tree->Write();
    rootFile->Close();
}

void SteppingAction::UserSteppingAction(const G4Step* step) {
    // Example: Print information about each step
    G4Track* track = step->GetTrack();
    G4StepPoint* prePoint = step->GetPreStepPoint();
    G4StepPoint* postPoint = step->GetPostStepPoint();

    trackID = track->GetTrackID();
    stepNumber = track->GetCurrentStepNumber();
    energy = track->GetKineticEnergy();

    prePosition[0] = prePoint->GetPosition().x();
    prePosition[1] = prePoint->GetPosition().y();
    prePosition[2] = prePoint->GetPosition().z();

    postPosition[0] = postPoint->GetPosition().x();
    postPosition[1] = postPoint->GetPosition().y();
    postPosition[2] = postPoint->GetPosition().z();

    // Check if the particle transitions from Emulsion to Wood or vice versa
    G4Material* currentMaterial = prePoint->GetMaterial();
    G4Material* nextMaterial = postPoint->GetMaterial();

    if ((currentMaterial->GetName() == "Emulsion" && nextMaterial->GetName() == "Wood") ||
        (currentMaterial->GetName() == "Wood" && nextMaterial->GetName() == "Emulsion")) {
        
        // Simulate particle loss based on energy distribution (Gaussian)
        double meanEnergy = 10.0;  // Set your mean energy
        double stdDevEnergy = 2.0;  // Set your standard deviation

        TRandom randGenerator;  // ROOT random number generator
        double randomValue = randGenerator.Gaus(meanEnergy, stdDevEnergy);

        if (energy > randomValue) {
            // Particle is not lost, increment particle count
            particleCount++;

            // Add the current step information to the TTree
            tree->Fill();
        }
    }
}
