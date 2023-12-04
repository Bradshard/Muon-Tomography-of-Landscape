// RunAction.hh
#ifndef RUNACTION_HH
#define RUNACTION_HH

#include "G4UserRunAction.hh"
#include "G4Run.hh"

class RunAction : public G4UserRunAction {
public:
    RunAction();
    virtual ~RunAction();

    virtual void BeginOfRunAction(const G4Run* run);
    virtual void EndOfRunAction(const G4Run* run);

private:
    // Add any other member variables or functions as needed
};

#endif // RUNACTION_HH

