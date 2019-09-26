//
//  Spaceship.cpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#include "Spaceship.hpp"

Spaceship::Spaceship(double disp, double thr, double pow, int max, int stall){
    displacement = disp;
    thrust = thr;
    power = pow;
    maxSpeed = max;
    stallSpeed = stall;
}

Spaceship::~Spaceship(){};


