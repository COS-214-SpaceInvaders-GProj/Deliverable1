#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include "Spaceship.h"
#include <iostream>
using namespace std;

/**
    Battleship class is a concrete product which inherits publicly from Spaceship
*/
class Battleship : public Spaceship{
    public:
    /// Battleship constructor
            Battleship() : Spaceship(){};
    /// Spaceship is inherited from Spaceship parent class but implemented in Battleship class
            void SpaceshipDescr();
	   ///clone spaceShips
	    Spaceship* divide()
		{
			return new Battleship(*this);
		}
	//~ protected:
	//~ Battleship(const Battleship& battle) : Spaceship(battle)
	//~ {} // copy constructor
		
};

#endif /* Battleship_hpp */