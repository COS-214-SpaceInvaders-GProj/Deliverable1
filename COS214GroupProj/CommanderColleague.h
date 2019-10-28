#ifndef COMMANDERCOLLEAGUE_H
#define COMMANDERCOLLEAGUE_H
#include <string>
#include "Colleague.h"
#include "Mediator.h"
using namespace std;

class CommanderColleague: public Colleague 
{
	public:
		CommanderColleague(string);
		virtual void notify(string);
		virtual void notify();
		virtual void update();
		virtual void getNotification(string);
};
#endif
