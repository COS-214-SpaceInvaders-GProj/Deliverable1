#include "Spaceship.h"
#include "Decorator.h"
#include "FighterTransporter.h"
#include "Sickbay.h"
#include "FighterFactory.h"
#include "SpaceshipFactory.h"
#include "Composite.h"
#include "Spacestation.h"
#include "State.h"
#include "Moderate.h"
#include "People.h"
#include "Crew.h"
#include "Passenger.h"
#include "AnnocementMediator.h"
//#include "Chain.cpp"
#include "Facade.h"
#include <iostream>

using namespace std;

int main()
{
	Facade *interface = new Facade();
	
	interface->createSpaceships();  //factory for creating spaceships
	
	
	Spaceship* Space = interface->BuildingSpaceships(); //creates spaceships and returns pointer to the availble spaceships
	Spaceship* DecoratedSpaceship =  interface->DecoratingSpaceships(); //adds decorations to spaceships	
	Crew * crewMembers=  interface->AddingCrewMembersOnSpaceship(); //add people on the different spaceships
	Passenger * passangers = interface->addingPassangers(); //add people on the different spaceships
	
	//cloning spaceship
	cout<<" cloning------------------------------------------------------------------"<<endl;
	Spaceship * cloneSpace = interface->DoublingNumberOfSpaceships(); // clones of the avaliable spaceships
	
	cout<<" composite------------------------------------------------------------------"<<endl;
	Spaceship *comp = interface->subSpaceships(); //grouping spaces ships into composite
	cout<<"ON THE SPACESTATION--------------------------------------------------------------- "<<endl;
	interface->SimulationOfSpaceStation(); //showing activities on the spaceStation
	interface->ChainOfCommand(); //a reporting structure
	interface->AnnocementToCrewAndPassangers(); //Crew sending messages to other members of the spaceship
	interface->FindingHabitablePlanets(); //finding planets to rest in 
	interface->StoringSpaceships(); //Memento to storeSpaceships
	interface->SimulationOfCrittters();
	delete interface; //destructor
	return 0;
}
	
