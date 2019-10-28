//
//  FrigateFactory.cpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#include "FrigateFactory.h"

Spaceship * FrigateFactory::buildSpaceship(){
    return new Frigate();
}
