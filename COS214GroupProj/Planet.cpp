#include <iostream>
#include "Planet.h"

using namespace std;

Planet::Planet(string pName)
{
	planetName = pName;
}
void Planet::setName(string pName)
{
	planetName = pName;
}
string Planet::getName()
{
	return planetName;
}

 void Planet::setState(bool state)
{
	habitable = state;
	cout << "state changed, notifying others..." << endl;
	notify();
}
bool Planet::getState()
{
	return habitable;
}
void Planet::add(Colleague* observer)
{
	obList.push_back(observer);
	observer->setPlanet(this);
	cout << observer->getName() << " is now observing " << planetName << endl;
}
void Planet::remove(Colleague* ob)
{
	bool found = false;
	vector<Colleague*>::iterator i;
	for (i = obList.begin(); i != obList.end(); ++i)
	{
		if(*i == ob)
		{
			found = true;
			obList.erase(i);
		}
	}
	if(found)
	{
		cout << "Observer found and erased!" << endl;
	}
	else
	{
		cout << "Observer not found!" << endl;
	}
}
void Planet::notify()
{
	vector<Colleague*>::iterator i;
	for (i = obList.begin(); i != obList.end(); ++i)
	{
		(*i)->update();
	}
}
