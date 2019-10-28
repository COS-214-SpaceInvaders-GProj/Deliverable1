#include <iostream>
#include "ChiefEngineerFactory.h"
#include "Crew.h"
#include "ChiefEngineer.h"
using namespace std;

Crew* ChiefEngineerFactory::createMember()
{
	cout << "Creating Chief Engineer..." << endl;
	ChiefEngineer* myMember = new ChiefEngineer();
	return myMember;
	
}