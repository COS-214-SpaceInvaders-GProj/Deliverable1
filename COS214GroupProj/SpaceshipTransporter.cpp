//
//  SpaceshipTransporter.cpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#include "SpaceshipTransporter.hpp"

void SpaceshipTransporter::SpaceshipDescr(){
    cout << "FighterTransporter description: " << endl;
    cout<< "Displacement = " << getDisplacement() << " km"<<endl;
    cout<< "Power = " << getPower() << endl;
    cout << "Max Speed = " << getMaxSpeed() << " km/h" << endl;
    cout << "Stall Speed = " << getStallSpeed() << " km/h" << endl;
    cout << "Thust = " << getThrust() << endl;
}
