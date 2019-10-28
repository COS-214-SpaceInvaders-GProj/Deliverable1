#ifndef NETWORK_H
#define NETWORK_H
#include <vector>
#include <string>
#include "Mediator.h"
using namespace std;

class Network: public Mediator
{
	private:
		vector<Colleague*> colleagues;//vector to hold colleagues
	public:
		virtual void update(string,string); //virtual method notify
		virtual void broadcast(Colleague*,string); //virtual method broadcast
		
};
#endif