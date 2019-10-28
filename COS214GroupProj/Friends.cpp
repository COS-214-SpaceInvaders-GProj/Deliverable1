#include "Friends.h"

using namespace std;

Friends :: Friends(int tolerence)
{
	tolerenceLevel = tolerence;
}

void Friends ::setTolerence(int tol)
{
	tolerenceLevel = tol;
}

int Friends ::getTolerence()
{
	return tolerenceLevel;
}

Critters* Friends ::evalute(People & people)
{
	context = &people;
	////looks up message from the people and if message is founf it return true else false
	bool Great = people.lookup(message);
	
	///////if look up returns true then they understood what the critter said heance still friends
	if(Great == true)
	{
		cout<<"Message understood by people. "<<endl;
	}
	
	/////else they the havent undersood 
	////there fore reduce tolerence level
	else 
	{
		cout<<"Message not understood by people. "<<endl;
	}
	--tolerenceLevel;
	if(tolerenceLevel<0)
	{
		cout<<"Tolerence level ran out, you are now an enemy."<<endl;
		return new Enemy(context);
	}
	else
		return this;
	
}

string Friends:: getMessage()
{
	return message;
}