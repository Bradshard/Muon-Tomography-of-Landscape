#include "PhysicsList.hh"
#include "G4EmStandardPhysics.hh"
PhysicsList::PhysicsList()
{
    // Register electromagnetic and optical physics processes
    RegisterPhysics(new G4EmStandardPhysics());
    RegisterPhysics(new G4OpticalPhysics());
    


}

PhysicsList::~PhysicsList() {}
