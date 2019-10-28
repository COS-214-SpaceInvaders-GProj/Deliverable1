#ifndef CREW_H
#define CREW_H
#include<iostream>
#include<string>
#include "People.h"
using namespace std;

class Crew  : public People
{
	private:
		
	
	public:
		void Action()
		{
			cout<<"I am a Crew Member"<<endl;
		}
		Crew():People()
		{}
		Crew(AnnocementMediator * a):People(a)
		{}
		virtual void Send(string message, bool annocement); // send message to crew or passangers
		virtual void receive(string message); // receive messages from members through mediator
		
};

#endif