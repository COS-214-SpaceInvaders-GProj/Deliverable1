#ifndef CAPTAINFACTORY_H
#define CAPTAINFACTORY_H
#include "CrewFactory.h"
#include <string>

using namespace std;

class CaptainFactory:public CrewFactory
{
	public:
		virtual Crew* createMember();
};

#endif
