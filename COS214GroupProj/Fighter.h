#ifndef FIGHTER_H
#define FIGHTER_H
#include <string>
#include "Colleague.h"
#include "Mediator.h"
#include "AnalyzedPlanet.h"
using namespace std;

class Fighter: public Colleague 
{
	private:
		//AnalyzedPlanet* planet;
		//bool habitable;
	public:
		Fighter(string);
		void setPlanet(AnalyzedPlanet*);
		virtual void notify(string);
		virtual void notify();
		virtual void getNotification(string);
		virtual void update();
};
#endif
