#ifndef ENEMY_H
#define ENEMY_H
#include<iostream>
#include<string>
#include "Critters.h"
#include "People.h"
using namespace std;


/////////Terminal expression
class Enemy  : public Critters
{
	private:
		int healthP;
		People * context;
		string message;
		
		
	
	public:
		int getHealthP();
		
		void setHealthP(int health);
		
		Critters* evalute(People & people);
		Enemy(People * Context);
		//~ bool evalute(People & sendMessage);

};

#endif