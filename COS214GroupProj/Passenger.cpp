#include "People.h"
#include "Passenger.h"
#include "AnnocementMediator.h"

void Passenger::Send(string message, bool annocement) // send message to crew or passangers
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
void Passenger::receive(string message) // receive messages from members through mediator
{
	cout<<"The following message was received by Passanger : "<<message<<endl;
	
}
