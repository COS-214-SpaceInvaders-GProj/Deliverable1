#include "Enemy.h"

using namespace std;

Enemy :: Enemy(People * Context)
{
	this->context = Context;
}

//////returns critters health points
int Enemy ::getHealthP()
{
	return healthP;
}
//////sets critters health points
void Enemy :: setHealthP(int health)
{
	healthP = health;
}

/////////////critters attacking people because they are now enemies
Critters* Enemy :: evalute(People & people)
{
	people.attack(this);
}