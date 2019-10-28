#ifndef CHIEFENGINEERFACTORY_H
#define CHIEFENGINEERFACTORY_H
#include "CrewFactory.h"
#include <string>

using namespace std;

class ChiefEngineerFactory:public CrewFactory
{
	public:
		virtual Crew* createMember();
};

#endif