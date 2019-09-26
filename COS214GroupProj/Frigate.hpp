//
//  Frigate.hpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#ifndef Frigate_hpp
#define Frigate_hpp

#include "Spaceship.hpp"
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
};

#endif /* Frigate_hpp */
