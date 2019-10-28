#ifndef COMMSFACTORY_H
#define COMMSFACTORY_H
#include "CrewFactory.h"
#include <string>

using namespace std;

class CommsFactory:public CrewFactory
{
	public:
		virtual Crew* createMember();
};

#endif