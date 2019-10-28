#include <iostream>
#include "Fighter.h"
using namespace std;

Fighter::Fighter(string cName):Colleague(cName)
{
	
}
void  Fighter::setPlanet(AnalyzedPlanet* newPlanet)
{
	planet =newPlanet;
	habitable = newPlanet->getState();
}
void Fighter::notify(string com)
{
	cout << "Contacting colleague..." << endl;
	mediator->update(com,messg);
}
void Fighter::notify()
{}
void Fighter::update()
{
	cout << name << " is updating " << planet->getName() << "'s state..." << endl;
	habitable = planet->getState();
	cout << "state changed! " << endl;
}
void Fighter::getNotification(string msg)
{
	cout << "Notification to " << name <<": ";
	cout << "'" << msg << "'" << endl;
}
