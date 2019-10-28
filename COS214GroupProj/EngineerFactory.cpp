#include <iostream>
#include "EngineerFactory.h"
#include "Crew.h"
#include "Engineer.h"
using namespace std;

Crew* EngineerFactory::createMember()
{
	cout << "Creating Engineer..." << endl;
	Engineer* myMember = new Engineer();
	return myMember;
	
}