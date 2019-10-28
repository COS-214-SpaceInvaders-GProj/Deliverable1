#include "People.h"
#include "Crew.h"
#include "AnnocementMediator.h"

void Crew::Send(string message, bool annocement) // send message to crew or passangers
{
	if(annocement)
	{
		mediator->generalAnnocement(message);
	}
	else
	{
		mediator->Invitation(message);
	}
}
void Crew::receive(string message) // receive messages from members through mediator
{
	cout<<"The following message was received by Crew : "<<message<<endl;
	
}