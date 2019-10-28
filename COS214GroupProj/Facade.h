#ifndef FACADE_H
#define FACADE_H
#include "Spaceship.h"
#include "Decorator.h"
/* spaceship factory */
#include "SpaceshipFactory.h"
#include "FighterTransporter.h"
#include "BattleshipFactory.h"
#include "SpaceTransporterFactory.h"
#include "FighterFactory.h"
#include "FrigateFactory.h"
#include "ExplorationFactory.h"
/*decoration*/
#include "Sickbay.h"
#include "Bridge.h"
#include "SleepingQuarters.h"
#include "Decorator.h"
/* crew member and people */
#include "People.h"
#include "Crew.h"
#include "Passenger.h"
#include "CrewFactory.h"
#include "CaptainFactory.h"
#include "CommanderFactory.h"
#include "CommanderColleague.h"
#include "EngineerFactory.h"
#include "NavigatorFactory.h"
#include "CommsFactory.h"
#include "DoctorFactory.h"
#include "ChiefEngineerFactory.h"
#include "Fighter.h"
#include "spaceFighterFactory.h"

#include "Composite.h"
#include "Spacestation.h"
#include "State.h"
#include "Moderate.h"
/* habitable planents */
#include "Mediator.h"
#include "Colleague.h"
#include "spaceFighter.h"
#include "Commander.h"
#include "Network.h"
#include "AnalyzedPlanet.h"

#include "AnnocementMediator.h"
#include "Chain.cpp"
/* Memento */
//#include "Spaceship.h"
#include "CaptainsLog.h"
#include "Store.h"
#include "StateMemento.h"
/* interpreter */
#include "Critters.h"
#include "Enemy.h"
#include "Friends.h"
/* strategy */
#include "Context.h"
#include "Manufacturing.h"
#include "Purchasing.h"
#include "Sourcing.h"
#include "Strategy.h"
#include <iostream>
#include <string>

using namespace std;


class Facade
{
	private:
	//objects for spaceship creation	
	SpaceshipFactory* battleshipfactory ; 
	SpaceshipFactory*  Spacetransporterfactory ;
	SpaceshipFactory* Frigatefactory ; 
	SpaceshipFactory* Fighterfactory ; 
	SpaceshipFactory* Explorationfactory ; 
	Spaceship *spaceships[5]; //array of spaceships
	/* A bunch of decorators */
	Decorator*  sickBay[5] ;
	Decorator*  sleeping[5];
	Decorator*  bridge[5];
	/*cloning my spaceships */
	Spaceship * cloneSpaces[5]; 
	/*composite, grouping of spaceships */
	Spaceship *masterShip;
	Spaceship *subSpaceship;
	/* Spacestation */
	State *s = new Moderate(); //initial state of spaceship
	/* adding people to the spaceship */
	CrewFactory * crewfactory[8];
	Crew * crewMembers[8];
	Passenger * passangersMembers[8];

	
	public:
	void createSpaceships();	//creating spaceships
	Spaceship* BuildingSpaceships(); //buiding different spaceships
	Spaceship* DecoratingSpaceships(); //add functionally to spaceship
	Crew * AddingCrewMembersOnSpaceship(); //adding workers on spaceship
	Passenger * addingPassangers(); //adding passangers to go see planets
	Spaceship* DoublingNumberOfSpaceships(); //doubling number of spaceships 
	Spaceship* subSpaceships(); //grouping spaces ships into composite
	void SimulationOfSpaceStation(); //having a spaceStation
	void ChainOfCommand(); //a reporting structure
	void AnnocementToCrewAndPassangers(); //Crew sending messages to other members of the spaceship
	void FindingHabitablePlanets(); //finding planets to rest in 
	void StoringSpaceships(); //Memento to storeSpaceships
	void SimulationOfCrittters(); // show how critters go from friend to emeny 
	void SurviveMechanismsToProcure(); //strategy
	~Facade(); //destructor
	
};
#endif

		
		
		
		
	
		
	