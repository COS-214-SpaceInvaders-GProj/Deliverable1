#ifndef ANALYZEDPLANET_H
#define ANALYZEDPLANET_H
#include <vector>
#include <string>
#include "Planet.h"
using namespace std;
class AnalyzedPlanet: public Planet
{
	private:
		//vector<Colleague*> myObservers;
		//bool habitable;
	public:
		AnalyzedPlanet(string);
		void setState(bool);
		bool getState();
};
#endif
