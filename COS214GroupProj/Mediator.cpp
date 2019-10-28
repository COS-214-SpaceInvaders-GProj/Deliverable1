#include "Mediator.h"
#include <iostream>
using namespace std;

Mediator::Mediator()
{}
void Mediator::addColleague(Colleague* coll)
{
	colleagues.push_back(coll);	
}
vector<Colleague*> Mediator::getColleagues()
{
	return colleagues;
}
void Mediator::update(string coll,string msg)
{}
void Mediator::broadcast(Colleague* coll,string msg)
{}