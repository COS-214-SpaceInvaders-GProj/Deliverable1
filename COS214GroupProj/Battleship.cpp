#include "Battleship.h"

void Battleship::SpaceshipDescr(){
    cout << "FighterTransporter description: " << endl;
    cout<< "Displacement = " << getDisplacement() << " km"<<endl;
    cout<< "Power = " << getPower() << endl;
    cout << "Max Speed = " << getMaxSpeed() << " km/h" << endl;
    cout << "Stall Speed = " << getStallSpeed() << " km/h" << endl;
    cout << "Thust = " << getThrust() << endl;
    cout<<"bridge of this particular spaceship has "<<getBridge()<<" level of fancy "<<endl;
    cout<<"Sleeping Quarters of this particular spaceship has "<<getSleepingQuarters()<<" level of fancy "<<endl;
    cout<<"Sick Bay of this particular spaceship has "<<getSickBay()<<" level of fancy "<<endl;
	    
}
