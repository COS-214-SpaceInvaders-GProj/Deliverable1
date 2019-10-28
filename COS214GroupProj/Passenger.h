#ifndef PASSENGER_H
#define PASSENGER_H
#include<iostream>
#include<string>
#include "People.h"
using namespace std;

class Passenger  : public People
{
	private:
		
	
	public:
		void Action()
		{
			cout<<"I am a Passanger"<<endl;
		}
		Passenger():People()
		{}
		Passenger(AnnocementMediator * a):People( a)
		{}
		virtual void Send(string message, bool annocement); // send message to crew or passangers
		virtual void receive(string message); // receive messages from members through mediator
};

#endif