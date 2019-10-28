#ifndef CAPTAINSLOG_H
#define CAPTAINSLOG_H

#include <iostream>
#include <string>
#include "StateMemento.h"

using namespace std;

//class Spaceship is originator

class StateMemento;

class CaptainsLog {				//memento
	public:
		virtual ~CaptainsLog() ;
	private:
		friend class Spaceship;

		CaptainsLog(string val1);
	
		StateMemento* _state;
};

#endif
