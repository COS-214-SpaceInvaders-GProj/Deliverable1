//
//  SpaceshipFactory.hpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#ifndef SpaceshipFactory_hpp
#define SpaceshipFactory_hpp

#include "Spaceship.hpp"
#include <iostream>
using namespace std;

/**
    SpaceshipFactory acts at the abstract factory in the AF pattern
*/
class SpaceshipFactory{
    public:
        /// pure virtual function that provides interface for creating spaceships but is only implemented in child classes
        virtual Spaceship * buildSpaceship()=0;
};

#endif /* SpaceshipFactory_hpp */
