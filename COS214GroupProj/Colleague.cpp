#include <iostream>
#include "Colleague.h"
using namespace std;


Colleague::Colleague(string cName)
{
	mediator = NULL;
	name = cName;
}
Colleague::Colleague(Mediator* med, string cName)
{
	mediator = med;
	name = cName;
}
Colleague::~Colleague()
{
	//delete mediator;
	mediator = NULL;
}
void Colleague::setMediator(Mediator* med)
{
	mediator = med;
}

Mediator* Colleague::getMediator()
{
	return mediator;
}
void Colleague::setPlanet(Planet* nPlanet)
{
	planet = nPlanet;
}
void Colleague::setName(string cName)
{
	name = cName;
}
void Colleague::setMsg(string msg)
{
	messg = msg;
}
string Colleague::getName()
{
	return name;
}
void Colleague::notify(string msg) 
{}
void Colleague::notify() 
{}
void Colleague::getNotification(string msg)
{}
void Colleague::update() 
{}