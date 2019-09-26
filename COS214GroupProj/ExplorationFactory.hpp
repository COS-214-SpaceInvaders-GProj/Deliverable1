//
//  ExplorationFactory.hpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#ifndef ExplorationFactory_hpp
#define ExplorationFactory_hpp

#include "ExplorationVessel.hpp"
#include "SpaceshipFactory.hpp"
#include <iostream>
using namespace std;

/**
    ExplorationFactory class is concrete factory for instantiating Exploration spaceships by inheriting from abstract factory
*/
class ExplorationFactory : public SpaceshipFactory{
    public:
    /// buildspaceship function for instantiating a spaceship a Exploration spaceship of type Spaceship class
        Spaceship * buildSpaceship();
};

#endif /* ExplorationFactory_hpp */
