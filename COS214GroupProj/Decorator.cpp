#include "Decorator.h"
#include "Observer.h"

using namespace std;

Decorator::Decorator(Spaceship* mySpace):Spaceship()
{
	mySpaceship = mySpace;
}

Decorator::~Decorator()
{
	delete mySpaceship;
}

void Decorator::DegreeOfFancy()
{
	mySpaceship->SpaceshipDescr();
}

void Decorator::SpaceshipDescr(){
}

//milestone 3 bullet 3 observer functions 

bool Decorator::attach(Observer* crew)
{
	observe.push_back(crew);
	return true;
}
bool Decorator::detach(Observer* crew)
{
	bool found = false;

	vector<Observer*>::iterator it = observe.begin();
	while ((it != observe.end()) && (! found)) {
	if (*it == crew) {
		found = true;
		observe.erase(it);
		}
		++it;
	}
	return found;
}
void Decorator::notify()
{
	vector<Observer*>::iterator it = observe.begin();
	for (it = observe.begin(); it != observe.end(); ++it)
	{
		(*it)->update();
	}
}
