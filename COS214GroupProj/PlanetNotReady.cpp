#include "PlanetNotReady.h"

using namespace std;

PlanetNotReady::PlanetNotReady(Planet* planet)
{
	thatplanet = planet;
}

void PlanetNotReady::execute()
{
	if(thatplanet->getState() == false)				//if some work still neeeds to be done to make planet suitable for habitation
	{
		cout << "Commander says: Transport additional fighters to planet to ready it for habitation and fight against critters!" << endl;
	}	
}
