#include <iostream>
#include "AnalyzedPlanet.h"

using namespace std;

AnalyzedPlanet::AnalyzedPlanet(string pName):Planet(pName)
{
	habitable = false;
}
void AnalyzedPlanet::setState(bool state)
{
	Planet::setState(state);
}
bool AnalyzedPlanet::getState()
{
	return Planet::getState();
}
