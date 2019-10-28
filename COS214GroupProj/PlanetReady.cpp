#include "PlanetReady.h"

using namespace std;

PlanetReady::PlanetReady(Planet* planet)
{
	thisplanet = planet;
}

void PlanetReady::execute()
{
	if(thisplanet->getState())			//once the planet is suitable for habitation
	{
		cout << "Commander says: Transport fighters as passengers to planet!" << endl;
	}
}
