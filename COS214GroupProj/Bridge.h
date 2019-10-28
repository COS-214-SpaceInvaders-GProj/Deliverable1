#ifndef BRIDGE_H
#define BRIDGE_H
#include "Decorator.h"
using namespace std;

/*
Concrete class to add responsibilities to the component
*/
//class Decorator;
class Bridge: public Decorator
{
	private:
		////bridge state milestone 3 bullet 3
		string state;
	public:
		/*
		DegreeOfFancy calls method on the wrapped object
		and adds its own unique behaivour
		*/
		Bridge(Spaceship* mySpace):Decorator(mySpace)
		{};
		void DegreeOfFancy();
		
		/////milestone 3 bullet 3 observer
		void setBridgeState(string State);
		string getBridgeState();
};
#endif