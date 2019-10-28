#ifndef PLANETNOTREADY_H
#define PLANETNOTREADY_H
#include "Planet.h"
#include "PlanetCommand.h"
#include <iostream>
#include <string>

using namespace std;

class PlanetNotReady : public PlanetCommand{
	public:
		PlanetNotReady(Planet* );
		void execute();
	private:
		Planet* thatplanet;
};


#endif