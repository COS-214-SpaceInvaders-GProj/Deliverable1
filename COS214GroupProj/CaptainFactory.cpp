#include <iostream>
#include "CaptainFactory.h"
#include "Crew.h"
#include "Captain.h"
using namespace std;

Crew* CaptainFactory::createMember()
{
	cout << "Creating Captain..." << endl;
	Captain* myMember = new Captain();
	return myMember;
	
}
