//
//  Spaceship.hpp
//  COS214GroupProj
//
//  Created by Admin on 2019/09/26.
//  Copyright © 2019 COS214. All rights reserved.
//

#ifndef Spaceship_hpp
#define Spaceship_hpp

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
    Spaceship class acts as Abstract product class in Abstract Factory pattern
*/
class Spaceship{
    private:
        /// Displacement is the distance that the spaceship has moved from it's initial position
        double displacement;
        /// Power refers to the
        double power;
        /// Thrust refers to how much energy is required to propel the spaceship forward
        double thrust;
        /// the maximum speed that the spaceship can travel
        int maxSpeed;
        /// the normal speed which the spaceship moves at is the stall speed
        int stallSpeed;
        /// a vector of strings to store the names of the crew members
        vector<string> crew;
        /// a vector of passengers to store the names of the passengers
        vector<string> passengers;
    public:
        /// Abstract product constructor
        Spaceship();
        /// parametized constructor of spaceship class
        Spaceship(double disp, double thr, double pow, int max, int stall);
        /// virtual destructor of base class
        virtual ~Spaceship();
        /// SpaceshipDescr prints out the details of a spaceship. is declared as pure virtual and will be implemented in the child classes
        virtual void SpaceshipDescr()=0;
    
    
        /**
         A set of getters and setters
        */
        void setDisplacement(double disp){ displacement = disp;};
        double getDisplacement(){return displacement;};
        void setPower(double pow){power = pow;};
        double getPower(){return power;};
        void setMaxSpeed(int max){maxSpeed = max;};
        int getMaxSpeed(){return maxSpeed;};
        void setStallSpeed(int stall){stallSpeed=stall;};
        int getStallSpeed(){return stallSpeed;};
        void setThrust(double thr){thrust =thr;};
        double getThrust(){return thrust;}
};
#endif /* Spaceship_hpp */
