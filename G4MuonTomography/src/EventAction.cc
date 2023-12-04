#include "EventAction.hh"
#include "G4Event.hh"
#include "G4RunManager.hh"

EventAction::EventAction() {}

EventAction::~EventAction() {}

void EventAction::BeginOfEventAction(const G4Event* /*event*/) {}

void EventAction::EndOfEventAction(const G4Event* event) {
    G4int eventID = event->GetEventID();
    G4RunManager* runManager = G4RunManager::GetRunManager();
    runManager->SetPrintProgress(eventID);
}

