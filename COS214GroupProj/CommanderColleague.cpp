#include <iostream>
#include "CommanderColleague.h"
using namespace std;

CommanderColleague::CommanderColleague(string cName):Colleague(cName)
{}
void CommanderColleague::notify(string msg)
{}
void CommanderColleague::notify()
{
	cout << "Contacting fighters..." << endl;
	mediator->broadcast(this,messg);
}
void CommanderColleague::update()
{}
void CommanderColleague::getNotification(string msg)
{
	cout << "Notification to " << name <<": ";
	cout  <<"'" << msg << "'" << endl;
}
