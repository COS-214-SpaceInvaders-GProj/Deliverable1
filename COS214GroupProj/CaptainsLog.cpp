#include "Spaceship.h"
#include "CaptainsLog.h"
#include "StateMemento.h"
#include <iostream>
#include <string>

CaptainsLog::CaptainsLog(string val)
{
	_state = new StateMemento(val);
}

CaptainsLog::~CaptainsLog()
{
	delete _state;
	_state = 0;
}

