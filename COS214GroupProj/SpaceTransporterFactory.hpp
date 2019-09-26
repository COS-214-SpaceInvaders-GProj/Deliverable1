//
//  SpaceTransporterFactory.hpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#ifndef SpaceTransporterFactory_hpp
#define SpaceTransporterFactory_hpp

#include "SpaceshipTransporter.hpp"
#include "SpaceshipFactory.hpp"
#include <iostream>
using namespace std;

/**
    SpaceTransporterFactory class is concrete factory for instantiating space transporter spaceships by inheriting from abstract factory
*/
class SpaceTransporterFactory : public SpaceshipFactory{
    public:
    /// buildspaceship function for instantiating a spaceship a space transporter spaceship of type Spaceship class
        Spaceship * buildSpaceship();
};

#endif /* SpaceTransporterFactory_hpp */
