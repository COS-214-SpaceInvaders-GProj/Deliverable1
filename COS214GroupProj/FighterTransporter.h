#ifndef FIGHTERTRANSPORTER_H
#define FIGHTERTRANSPORTER_H

#include "Spaceship.h"
#include <iostream>
using namespace std;

/**
    FighterTransporter class is a concrete product which inherits publicly from Spaceship
*/
class FighterTransporter : public Spaceship{
    public:
        /// FighterTransporter constructor
        FighterTransporter() : Spaceship(){};
        /// Spaceship is inherited from Spaceship parent class but implemented in FighterTransporter class
        void SpaceshipDescr();
	// clone spaceships
	Spaceship* divide()
	{
		return new FighterTransporter(*this);
	}
	protected:
		
	//~ FighterTransporter(const FighterTransporter& fight) : Spaceship(fight)
	//~ {}
    
};

#endif /* FighterTransporter_hpp */