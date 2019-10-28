#include <iostream>
#include "NavigatorFactory.h"
#include "Crew.h"
#include "Navigator.h"
using namespace std;

Crew* NavigatorFactory::createMember()
{
	cout << "Creating Navigator..." << endl;
	Navigator* myMember = new Navigator();
	return myMember;
	
}