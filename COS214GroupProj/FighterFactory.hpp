//
//  FighterFactory.hpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#ifndef FighterFactory_hpp
#define FighterFactory_hpp

#include "SpaceshipFactory.hpp"
#include "FighterTransporter.hpp"
#include <iostream>
using namespace std;

/**
    FighterFactory class is concrete factory for instantiating Fighter spaceships by inheriting from abstract factory
*/
class FighterFactory : public SpaceshipFactory{
    public:
        /// buildspaceship function for instantiating a spaceship a fighter spaceship of type Spaceship class
        Spaceship * buildSpaceship();
};

#endif /* FighterFactory_hpp */
