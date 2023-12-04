// SteppingAction.hh
#ifndef STEPPINGACTION_HH
#define STEPPINGACTION_HH

#include "G4UserSteppingAction.hh"
#include "G4Step.hh"
#include "G4SystemOfUnits.hh"

class SteppingAction : public G4UserSteppingAction {
public:
    SteppingAction();
    virtual ~SteppingAction();

    virtual void UserSteppingAction(const G4Step* step);

private:
    // Add any other member variables or functions as needed
};

#endif // STEPPINGACTION_HH

