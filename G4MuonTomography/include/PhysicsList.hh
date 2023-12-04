#ifndef PhsicsList_hh
#define PhysicsList_hh

#include "G4VModularPhysicsList.hh"
#include "G4EmStandardPhysics.hh"
#include "G4OpticalPhysics.hh"

class PhysicsList : public G4VModularPhysicsList
{
	public:
		PhysicsList();
		~PhysicsList();
	
};

#endif

