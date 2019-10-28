#ifndef COLLEAGUE_H
#define COLLEAGUE_H
#include <string>
//#include "AnalyzedPlanet.h"
using namespace std;
class Planet;
class Mediator;//forward declaration of mediator class

class Colleague
{
	protected:
		Mediator* mediator;
		string name;
		string messg;
		Planet* planet;
		bool habitable;
	public:
		Colleague(string);
		Colleague(Mediator*, string);
		virtual ~Colleague();
		void setMediator(Mediator*);
		void setName(string);
		void setMsg(string);
		string getName();
		Mediator* getMediator();
		void setPlanet(Planet*);
		virtual void notify(string) = 0;
		virtual void notify() = 0;
		virtual void getNotification(string) = 0;
		virtual void update() = 0;
};
#endif