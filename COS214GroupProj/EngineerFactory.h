#ifndef ENGINEERFACTORY_H
#define ENGINEERFACTORY_H
#include "CrewFactory.h"
#include <string>

using namespace std;

class EngineerFactory:public CrewFactory
{
	public:
		virtual Crew* createMember();
};

#endif