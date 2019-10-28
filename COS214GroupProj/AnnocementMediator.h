#ifndef ANNOCEMENTMEDIATOR_H
#define ANNOCEMENTMEDIATOR_H
#include<iostream>
#include<string>
#include <vector>
using namespace std;
class People;
class AnnocementMediator
{
	vector<People*> people; 
	
	public:
		
	void Register(People * p); ////add receivers 
	void generalAnnocement(string message); // is it a general annocement
	void Invitation(string message); // Or an invitation
	
};
#endif
	