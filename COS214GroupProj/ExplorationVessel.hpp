//
//  ExplorationVessel.hpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#ifndef ExplorationVessel_hpp
#define ExplorationVessel_hpp

#include "Spaceship.hpp"
#include <iostream>
using namespace std;

/**
    ExplorationVessel class is a concrete product which inherits publicly from Spaceship
*/
class ExplorationVessel : public Spaceship{
    public:
    /// ExplorationVessel constructor
        ExplorationVessel() : Spaceship(){};
    /// Spaceship is inherited from Spaceship parent class but implemented in ExplorationVessel class
        void SpaceshipDescr();
};

#endif /* ExplorationVessel_hpp */
