#ifndef CONTEXT_H
#define CONTEXT_H
#include<iostream>
#include<string>
#include "Strategy.h"
using namespace std;

class Context
{
	private:
		Strategy * strategy ;
	public:
		Context(Strategy * s)
		{
			strategy=s;
		};
		void resourceAquiring()
		{
			strategy->methodToAquire();
		}
	
};

#endif