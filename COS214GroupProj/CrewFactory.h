#ifndef CREWFACTORY_H
#define CREWFACTORY_H
#include "Crew.h"
#include <string>
using namespace std;

class CrewFactory
{
	public:
		virtual ~CrewFactory();
		virtual Crew* createMember() = 0;
};

#endif