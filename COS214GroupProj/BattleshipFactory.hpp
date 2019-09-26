//
//  BattleshipFactory.hpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#ifndef BattleshipFactory_hpp
#define BattleshipFactory_hpp

#include "Battleship.hpp"
#include "SpaceshipFactory.hpp"
#include <iostream>
using namespace std;

/**
    BattleshipFactory class is concrete factory for instantiating Battleship spaceships by inheriting from abstract factory
*/
class BattleshipFactory : public SpaceshipFactory{
    public:
    /// buildspaceship function for instantiating a spaceship a Battleship spaceship of type Spaceship class
        Spaceship * buildSpaceship();
};

#endif /* BattleshipFactory_hpp */
