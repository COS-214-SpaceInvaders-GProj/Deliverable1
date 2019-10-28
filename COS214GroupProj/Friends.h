#ifndef FRIENDS_H
#define FRIENDS_H
#include<iostream>
#include<string>
#include<vector>
#include "Critters.h"
#include "Enemy.h"
#include "People.h"
using namespace std;


////////Non terminal expression
class Friends  : public Critters
{
	private:
		//vector<Critters*> friends;
		int tolerenceLevel; 
		People *context;
		string message;
	public:
		Critters* evalute(People & people);
		void setTolerence(int tol);
		int getTolerence();
		string getMessage();
		Friends(int);
};

#endif