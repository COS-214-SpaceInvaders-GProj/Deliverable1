#ifndef PEOPLE_H
#define PEOPLE_H
#include<iostream>
#include<string>
#include <map>
#include <vector>
#include "Critters.h"
using namespace std;
 
class Enemy;
class Friends;

class AnnocementMediator;

class People  //: public SpaceStation
{
	protected :
	AnnocementMediator * mediator;
	std::map<std::string, bool> nameValue;
	int sizeH;
	vector<Enemy*>enemy;	
	
	public:
		
		explicit People(void);
		virtual ~People(void);
		People(AnnocementMediator * a)
		{mediator =a ;} // the mediator we send annocements with
		virtual void Action();
		virtual void Send(string message, bool annocement); // send message to crew or passangers
		virtual void receive(string message); // receive messages from members through mediator
		void reg();
		////////mileston4
		
		//////look up the messege sent by critters by the people
		bool lookup(const std::string paramName) const;
	
		//////assign critter message to language understood by people
		void assign(Friends* friends, bool english);
		
		//////if critter is enemy attack
		void attack(Enemy* fightEnemy);
		
};

#endif