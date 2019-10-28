#include "AnnocementMediator.h"
#include "People.h"
#include "Enemy.h"
#include "Friends.h"
using namespace std;
People::People(void)
 {}
 People::~People(void)
 {}
void People::Action()
{}
void People::Send(string message, bool annocement) // send message to crew or passangers
{}
void People::receive(string message) // receive messages from members through mediator
{}
void People::reg() //register users 
{
	mediator->Register(this);
	cout<<"Registered "<<endl;
}	

bool People::lookup(const std::string paramName) const
{    
	if (nameValue.find(paramName) != nameValue.end())
		return nameValue.find(paramName)->second;

	return false;
}

void People::assign(Friends* friends, bool english)
{
	nameValue[friends->getMessage()] = english;
}

/////////first add nemeny to enemy list
///////get health points of the enemy citter
////////loop through enemy list and attack the enemy
/////////when ever you attack, reduce health points of the critter and reset them
////if helth points are done then the critter works on the sppaceship
void People::attack(Enemy* fightEnemy)
{
	enemy.push_back(fightEnemy);
	int sizeH = fightEnemy->getHealthP();
	vector<Enemy*> :: iterator it ; //= ;
	for( it =enemy.begin(); it != enemy.end() ; it++)
	{
		cout<<"Shooting critter."<<endl;
		(*it)->setHealthP(--sizeH);
		sizeH = fightEnemy->getHealthP();
		if((*it)->getHealthP() == 0)
		{
			cout<<"Now worker on spaceship. "<<endl;
		}
	}
}