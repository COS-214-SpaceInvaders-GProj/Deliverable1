//
//  FighterTransporter.hpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#ifndef FighterTransporter_hpp
#define FighterTransporter_hpp

#include "Spaceship.hpp"
#include <iostream>
using namespace std;

/**
    FighterTransporter class is a concrete product which inherits publicly from Spaceship
*/
class FighterTransporter : public Spaceship{
    public:
        /// FighterTransporter constructor
        FighterTransporter() : Spaceship(){};
        /// Spaceship is inherited from Spaceship parent class but implemented in FighterTransporter class
        void SpaceshipDescr();
    
};

#endif /* FighterTransporter_hpp */
