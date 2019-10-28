#ifndef DECORATOR_H
#define DECORATOR_H
#include "Spaceship.h"
//#include "Observer.h"

/*
The decorator class has a field for referencing a spaceship object. 
The decorator delegates all work to the wrapped component
*/
class Observer;

class Decorator:public Spaceship
{
	protected:
		//reference to  a spaceship object
		Spaceship* mySpaceship;
	////mile stone 3 observer bullet 3 
		vector<Observer*> observe;
	///////
	public:
		//constructor to initialize mySpaceship
		Decorator(Spaceship* mySpace);
		//Deconstructor to destroy mySpaceship
		virtual ~Decorator();
		//DegreeOfFancy is used to add extra behaivor in the concrete classes
		virtual void DegreeOfFancy();
		void SpaceshipDescr();
	
	////milestone 3 functions observer bullet 3 
		bool attach(Observer* crew);
		bool detach(Observer* crew);
		void notify();
};
#endif