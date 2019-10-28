#ifndef DOCTORFACTORY_H
#define DOCTORFACTORY_H
#include "CrewFactory.h"
#include <string>

using namespace std;

class DoctorFactory:public CrewFactory
{
	public:
		virtual Crew* createMember();
};

#endif