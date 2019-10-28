#include "People.h"
#include "AnnocementMediator.h"


void AnnocementMediator::Register(People * p) //add  people to mediate between  
{ 
	people.push_back(p);
	
} 

void AnnocementMediator::generalAnnocement(string message) // is it a general annocement
{
	  vector<People*>::iterator it;

	  for (it = people.begin(); it != people.end(); ++it) {
	    (*it)->receive("Annocement : " +message );
	  }
	
}

void AnnocementMediator::Invitation(string message) // Or an invitation
{
	 vector<People*>::iterator it;

	  for (it = people.begin(); it != people.end(); ++it) {
	    (*it)->receive("Invitation : " +message );
	  }
	  
  }