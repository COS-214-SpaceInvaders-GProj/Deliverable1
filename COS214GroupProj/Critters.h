#ifndef CRITTERS_H
#define CRITTERS_H
#include<iostream>
#include<string>
#include "People.h"
using namespace std;

class People;
class Critters
{
	private:
		
	
	public:
		virtual Critters* evalute(People & sendMessage) = 0;
};

#endif