#ifndef PLANETCOMMAND_H
#define PLANETCOMMAND_H
#include<string>

using namespace std;

class PlanetCommand{
	
	public:
		virtual void execute ( ) = 0;

};
#endif