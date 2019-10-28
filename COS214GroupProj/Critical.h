#ifndef CRITICAL_H
#define CRITICAL_H
#include <iostream>
#include "Spacestation.h"
#include "State.h"
using namespace std;

class Critical : public State {
  public:
    virtual void handleChange(/*Spacestation* c*/);
    virtual string getThreatLevel();
   ~Critical();
};
  #endif