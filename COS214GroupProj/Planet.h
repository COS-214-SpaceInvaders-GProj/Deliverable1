#ifndef PLANET_H
#define PLANET_H
#include <vector>
#include <string>
#include "Colleague.h"
using namespace std;
class Colleague;
class Planet
{
	private:
		vector<Colleague*> obList;
	protected:
		string planetName;
		bool habitable;
	public:
		Planet(string);
		void setName(string);
		string getName();
		virtual void setState(bool);
		virtual bool getState();
		virtual void add(Colleague*);
		virtual void remove(Colleague*);
		virtual void notify();
};
#endif
