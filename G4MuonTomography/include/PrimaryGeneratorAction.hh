// PrimaryGeneratorAction.hh
#ifndef PRIMARYGENERATORACTION_HH
#define PRIMARYGENERATORACTION_HH

#include "G4VUserPrimaryGeneratorAction.hh"
#include "G4ParticleGun.hh"
//#include "G4GeneralParticleSource.hh"
#include "G4Event.hh"
#include "G4SystemOfUnits.hh"

class PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction {
public:
    PrimaryGeneratorAction();
    virtual ~PrimaryGeneratorAction();

    virtual void GeneratePrimaries(G4Event* anEvent);

private:
    G4ParticleGun* particleGun;
    //G4GeneralParticleSource* gps;

    // Add any other member variables or functions as needed
};

#endif // PRIMARYGENERATORACTION_HH

