#include <iostream>
#include "CommsFactory.h"
#include "Crew.h"
#include "Comms.h"
using namespace std;

Crew* CommsFactory::createMember()
{
	cout << "Creating Comms..." << endl;
	Comms* myMember = new Comms();
	return myMember;
	
}