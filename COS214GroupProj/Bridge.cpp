#include "Bridge.h"
#include "Decorator.h"

using namespace std;

void Bridge::DegreeOfFancy()
{	
	
	Decorator::DegreeOfFancy();
	mySpaceship->setBridge(mySpaceship->getBridge() + 1);
	mySpaceship->SpaceshipDescr();
	
	
}

/////milestone 3 bullet 3 observer
void Bridge::setBridgeState(string State)
{
	state=State;
}

string Bridge::getBridgeState()
{
	return state;
}