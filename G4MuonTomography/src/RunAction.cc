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
    G4cout << "### Run Start ###" << G4endl;

    // Initialize visualization
    //G4VisManager* visManager = new G4VisExecutive;
    //visManager->Initialize();
}

void RunAction::EndOfRunAction(const G4Run* run) {
    G4int numEvents = run->GetNumberOfEvent();
    if (numEvents == 0) return;

    // Calculate and print the flux
    G4double flux = static_cast<G4double>(numEvents) / run->GetRunID();
    G4cout << "Average Flux: " << flux / (1.0 * cm2) << " particles/(cm² event)" << G4endl;

    // Terminate visualization
    //G4VVisManager* visManager = G4VisManager::GetConcreteInstance();
    //if (visManager) delete visManager;
}
