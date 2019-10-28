#include <iostream>
#include "CommanderFactory.h"
#include "Crew.h"
#include "Commander.h"
using namespace std;

Crew* CommanderFactory::createMember()
{
	cout << "Creating commander..." << endl;
	Commander* myMember = new Commander();
	return myMember;
	
}