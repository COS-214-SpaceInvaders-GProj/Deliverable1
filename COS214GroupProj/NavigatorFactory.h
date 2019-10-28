#ifndef NAVIGATORFACTORY_H
#define NAVIGATORFACTORY_H
#include "CrewFactory.h"
#include <string>

using namespace std;

class NavigatorFactory:public CrewFactory
{
	public:
		virtual Crew* createMember();
};

#endif