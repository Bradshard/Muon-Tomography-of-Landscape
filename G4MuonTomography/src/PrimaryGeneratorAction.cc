#include "PrimaryGeneratorAction.hh"
#include "G4ParticleGun.hh"
#include "G4Event.hh"
#include "G4ParticleTable.hh"
#include "G4ParticleDefinition.hh"

PrimaryGeneratorAction::PrimaryGeneratorAction() {
    particleGun = new G4ParticleGun(1);

    G4ParticleTable* particleTable = G4ParticleTable::GetParticleTable();
    G4ParticleDefinition* muon = particleTable->FindParticle("mu-");
    particleGun->SetParticleDefinition(muon);
    particleGun->SetParticleEnergy(100 * MeV);
    particleGun->SetParticlePosition(G4ThreeVector(0, 0, 0));
    particleGun->SetParticleMomentumDirection(G4ThreeVector(0, 0, 1));
    
    
    
}

PrimaryGeneratorAction::~PrimaryGeneratorAction() {
    delete particleGun;
}

void PrimaryGeneratorAction::GeneratePrimaries(G4Event* anEvent) {
    particleGun->GeneratePrimaryVertex(anEvent);
}

