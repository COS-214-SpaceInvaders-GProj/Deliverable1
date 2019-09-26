//
//  Battleship.hpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#ifndef Battleship_hpp
#define Battleship_hpp

#include "Spaceship.hpp"
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
};

#endif /* Battleship_hpp */
