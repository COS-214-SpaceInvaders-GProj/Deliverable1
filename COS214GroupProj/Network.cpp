#include "Network.h"
#include <iostream>
using namespace std;

void Network::update(string coll,string msg)
{
	colleagues = Mediator::getColleagues();
	vector<Colleague*>::iterator i;
	for (i = colleagues.begin(); i != colleagues.end(); ++i)
	{
		if((*i)->getName() == coll)
		{
			(*i)->getNotification(msg);
		}
	}
}

void Network::broadcast(Colleague* coll,string msg)
{
	colleagues = Mediator::getColleagues();
	vector<Colleague*>::iterator i;
	for (i = colleagues.begin(); i != colleagues.end(); ++i)
	{
		if((*i)->getName() != coll->getName())
		{
			(*i)->getNotification(msg);
		}
	}
}