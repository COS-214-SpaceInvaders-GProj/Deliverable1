#ifndef EXPLORATIONVESSEL_H
#define EXPLORATIONVESSEL_H

#include "Spaceship.h"
#include <iostream>
using namespace std;

/**
    ExplorationVessel class is a concrete product which inherits publicly from Spaceship
*/
class ExplorationVessel : public Spaceship{
    public:
    /// ExplorationVessel constructor
        ExplorationVessel() : Spaceship(){};
    /// Spaceship is inherited from Spaceship parent class but implemented in ExplorationVessel class
        void SpaceshipDescr();
	// clone exploration
	Spaceship* divide()
		{
			return new ExplorationVessel(*this);
		}
	protected:
		//copy constructor
		//~ ExplorationVessel(const ExplorationVessel & explore) : Spaceship(explore)
		//~ {
		//~ }
};

#endif /* ExplorationVessel_hpp */