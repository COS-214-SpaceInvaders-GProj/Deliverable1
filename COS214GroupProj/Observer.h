#ifndef OBSERVER_H
#define OBSERVER_H
#include<iostream>
//#include "Decorator.h"
//#include "Bridge.h"
#include<string>
using namespace std;

class Bridge;
class Observer
{
	protected:
		Bridge * bridgeState;
		string state;
	public:
		void update();
		//~ {
			//~ state = bridgeState->getBridgeState();
		//~ }
};

#endif