//
//  FrigateFactory.hpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#ifndef FrigateFactory_h
#define FrigateFactory_h

#include "Frigate.h"
#include "SpaceshipFactory.h"
#include <iostream>
using namespace std;

/**
    FrigateFactory class is concrete factory for instantiating Frigate spaceships by inheriting from abstract factory
*/
class FrigateFactory : public SpaceshipFactory{
    public:
    /// buildspaceship function for instantiating a spaceship a Frigate spaceship of type Spaceship class
        Spaceship * buildSpaceship();
};

#endif /* FrigateFactory_hpp */
