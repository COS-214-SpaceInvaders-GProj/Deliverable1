#ifndef FRIGATE_H
#define FRIGATE_H

#include "Spaceship.h"
#include <iostream>
using namespace std;

/**
    Frigate class is a concrete product which inherits publicly from Spaceship
*/
class Frigate : public Spaceship{
    public:
    /// Frigate constructor
            Frigate() : Spaceship(){};
    /// Spaceship is inherited from Spaceship parent class but implemented in Frigate class
            void SpaceshipDescr();
	    // clone spaceship
	    Spaceship* divide()
		{
			return new Frigate(*this);
		}
	protected:
		//copy constructor
		//~ Frigate(const Frigate& frigates) : Spaceship(frigates)
		//~ {
			
		//~ }
};

#endif /* Frigate_hpp */