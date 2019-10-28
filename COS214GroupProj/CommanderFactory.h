#ifndef COMMANDERFACTORY_H
#define COMMANDERFACTORY_H
#include "CrewFactory.h"
#include "Crew.h"
#include <string>

using namespace std;

class CommanderFactory:public CrewFactory
{
	public:
		virtual Crew* createMember();
};

#endif