#ifndef MEDIATOR_H
#define MEDIATOR_H
#include <vector>
#include <string>
#include "Colleague.h"
using namespace std;
//class mediator
class Mediator
{
	private:
		vector<Colleague*> colleagues;//vector to hold colleagues
	public:
		Mediator();
		void addColleague(Colleague*); //add method to add colleagues to colleagues vector
		vector<Colleague*> getColleagues(); //return list of colleagues
		virtual void update(string,string) = 0; //pure virtual method notify
		virtual void broadcast(Colleague*,string) = 0; //pure virtual method broadcast
		
};
#endif