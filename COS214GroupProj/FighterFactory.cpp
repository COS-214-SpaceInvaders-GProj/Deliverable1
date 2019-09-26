//
//  FighterFactory.cpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#include "FighterFactory.hpp"

Spaceship * FighterFactory::buildSpaceship(){
    return new FighterTransporter();
}
