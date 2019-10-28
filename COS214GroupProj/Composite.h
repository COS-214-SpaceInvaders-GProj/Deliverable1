#ifndef COMPOSITE_H
#define COMPOSITE_H
#include "Spaceship.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Composite : public Spaceship
{
	private:
		vector <Spaceship*> next;
		//attributes in spaceship
	public:
		Composite() : Spaceship() //
		{
		}
		//add leafs to composite's vector
		void add(Spaceship* ships) 
		{
			next.push_back(ships);
		}
		//print all composite's spaceship
		void SpaceshipDescr() 
		{
			vector <Spaceship*>::iterator it;
			for(it = next.begin(); it != next.end(); ++it)
			{
				(*it)->SpaceshipDescr();
			}
			
		}
		
};

#endif