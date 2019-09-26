//
//  SpaceshipTransporter.hpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#ifndef SpaceshipTransporter_hpp
#define SpaceshipTransporter_hpp

#include "Spaceship.hpp"
#include <iostream>
using namespace std;

/**
    SpaceshipTransporter class is a concrete product which inherits publicly from Spaceship
*/
class SpaceshipTransporter : public Spaceship{
    public:
    /// SpaceshipTransporter constructor
            SpaceshipTransporter() : Spaceship(){};
    
    /// Spaceship is inherited from Spaceship parent class but implemented in SpaceshipTransporter class
            void SpaceshipDescr();
};

#endif /* SpaceshipTransporter_hpp */
