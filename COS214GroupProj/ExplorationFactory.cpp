//
//  ExplorationFactory.cpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#include "ExplorationFactory.h"

Spaceship * ExplorationFactory::buildSpaceship(){
    return new ExplorationVessel();
}
