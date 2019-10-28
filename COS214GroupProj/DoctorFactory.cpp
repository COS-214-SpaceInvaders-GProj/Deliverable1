#include <iostream>
#include "DoctorFactory.h"
#include "Crew.h"
#include "Doctor.h"
using namespace std;

Crew* DoctorFactory::createMember()
{
	cout << "Creating Doctor..." << endl;
	Doctor* myMember = new Doctor();
	return myMember;
	
}