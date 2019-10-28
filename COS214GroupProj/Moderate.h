#ifndef MODERATE_H
#define MODERATE_H
#include <iostream>
#include "Spacestation.h"
#include "State.h"
using namespace std;

//class Spacestation;

class Moderate : public State {
  public:
    virtual void handleChange(/*Spacestation* c*/);
    virtual string getThreatLevel();
   ~Moderate();
};
  #endif