#include"Facade.h"
	void Facade::createSpaceships()
	{
		battleshipfactory = new BattleshipFactory() ; 
		Spacetransporterfactory  = new SpaceTransporterFactory;
		Frigatefactory = new FrigateFactory(); 
		Fighterfactory =new FighterFactory() ; 
		Explorationfactory = new ExplorationFactory() ;
		
	}
	Spaceship* Facade::BuildingSpaceships()
	{
		spaceships[0] = battleshipfactory->buildSpaceship();
		spaceships[1] = Spacetransporterfactory->buildSpaceship();
		spaceships[2] = Frigatefactory->buildSpaceship();
		spaceships[3] = Fighterfactory->buildSpaceship();
		spaceships[4] = Explorationfactory->buildSpaceship();
		return *spaceships;
	}
	
	Spaceship* Facade::DecoratingSpaceships()
	{
		/*Sick bay*/
		spaceships[0]->setSickBay(1);
		spaceships[1]->setSickBay(2);
		spaceships[2]->setSickBay(3);
		spaceships[3]->setSickBay(4);
		spaceships[4]->setSickBay(5);
		/*Sleeping Quarters */
		spaceships[0]-> setSleepingQuarters(1);
		spaceships[1]-> setSleepingQuarters(2);
		spaceships[2]-> setSleepingQuarters(3);
		spaceships[3]-> setSleepingQuarters(4);
		spaceships[4]-> setSleepingQuarters(5);
		/* adding a bridge */
		spaceships[0]-> setBridge(1);
		spaceships[1]-> setBridge(2);
		spaceships[2]-> setBridge(3);
		spaceships[3]-> setBridge(4);
		spaceships[4]-> setBridge(5);
		/*improving sickbay, sleeping quarters, bridge */
		for(int i =0; i<5; i++)
		{
			sickBay[i] = new Sickbay(spaceships[i]);
			sleeping[i] = new SleepingQuarters(spaceships[i]);
			bridge[i] = new Bridge(spaceships[i]);
			sickBay[i]->DegreeOfFancy();
			sleeping[i]->DegreeOfFancy();
			bridge[i]->DegreeOfFancy();
		}
		
		return *spaceships;
	}
	/* adding people on spaceStation */
	Crew * Facade::AddingCrewMembersOnSpaceship()
	{
		crewfactory[0] = new CaptainFactory();
		crewfactory[1] = new CommanderFactory();
		crewfactory[2] = new EngineerFactory();
		crewfactory[3] = new NavigatorFactory();
		crewfactory[4] = new CommsFactory();
		crewfactory[5] = new DoctorFactory();
		crewfactory[6] = new ChiefEngineerFactory();
		crewfactory[7] = new spaceFighterfactory();
		
		for (int i =0; i< 8; i++)
		{
			crewMembers[i]= crewfactory[i]->createMember();
		}
		return *crewMembers;
	}
		 
	Passenger * Facade::addingPassangers()
	{
		for(int i=0; i<8; i++)
		{
			passangersMembers[i]= new Passenger();
		}
		return *passangersMembers;
	}
		
	Spaceship* Facade::DoublingNumberOfSpaceships()
	{
		/* duplicating spaces */
		for(int i =0; i<5; i++)
		{
			cloneSpaces[i] =  spaceships[i]->divide();
		}
		return *cloneSpaces;
	}
	
	Spaceship* Facade::subSpaceships()
	{
		/* composite, adding spaceship clones underneath main Spaceship to help shoot critters */
		Spaceship *masterShip = new Composite();

		for (int i =0;  i<5; i++)
		{
			masterShip->add(spaceships[i]); //add spaceship 
			masterShip->add(cloneSpaces[i]); //add spaceship clones
		}
		
		return masterShip;
	}
		
			
		
	void Facade::SimulationOfSpaceStation()
	{
		Spacestation::instance().setState(s); // Setting the state of the spaceship
		cout<< "Current homebase number "<<endl;
		Spacestation::instance().printSpacestationData();
		cout<<"Adding Spaceships to homebase spaceship"<<endl;
		for (int i =0;  i<5; i++)
		{
			Spacestation::instance().arrive(spaceships[i]);
		}
		//running simulation of the threat levels on the spaceship
		for (int i = 0; i < 4; i++) 
		{
			string currentThreatLevel = Spacestation::instance().getThreatLevel();
			cout << "Space Station is currently: " << currentThreatLevel << endl;
			Spacestation::instance().change();
		}
		cout<<"Simulating roles of people on the spaceship "<<endl;
		for (int i =0;  i<8; i++)
		{
			Spacestation::instance().addPeople(crewMembers[i]);
			Spacestation::instance().addPeople(passangersMembers[i]);
		}
		 Spacestation::instance().StrategyFunction(); //showing strategy
		
	}
	void Facade::ChainOfCommand()
	{
		 ///Assemble the chain:
    
    Report* ReportProblem = new FighterReport("Change Lightbulb");
    ReportProblem->add(new DoctorReport("Heal Injury"));
    ReportProblem->add(new EngineerReport("Repair Ship Damage"));
    ReportProblem->add(new ChiefEngineerReport("Repair Critical Ship Damage"));
    ReportProblem->add(new CommsReport("Manage Communication Problem"));
    ReportProblem->add(new NavigatorReport("Manage Location Issues"));
    ReportProblem->add(new CaptainReport("Attend to High Priority Issues"));
    ReportProblem->add(new CommanderOfFleetReport("Attend to Highest Priority Issue"));
    
    /**
        Randomly generate an integer that will be used as a seed to select the problem present in the report
    */
    srand((unsigned int)time(NULL));
    int RandomValue = rand() % 10 +1;
    string reportProblem = "";
    string problemCategory = "";
    
    cout << RandomValue << endl;
    
	    switch (RandomValue) {
	  case 1:
	    reportProblem = "Change Lightbulb";
	    problemCategory = "Damage";
	    break;
	  case 2:
	    reportProblem = "Heal Injury";
	    problemCategory = "Injury";
	    break;
	  case 3:
	    reportProblem = "Repair Ship Damage";
	    problemCategory = "Damage";
	    break;
	  case 4:
	    reportProblem = "Repair Critical Ship Damage";
	    problemCategory = "Damage";
	    break;
	  case 5:
	    reportProblem = "Manage Communication Problem";
	    problemCategory = "Communications";
	    break;
	  case 6:
	    reportProblem = "Manage Location Issues";
	    problemCategory = "Spatial Positioning";
	    break;
	  case 7:
	    reportProblem = "Attend to High Priority Issues";
	    problemCategory = "Exclusive Priority";
	    break;
	  case 8:
	    reportProblem = "Attend to Highest Priority Issue";
	    problemCategory = "Exclusive Priority";
	    break;
	  case 9:
	    reportProblem = "Attend to Food depleted";
	    problemCategory = "None";
	    break;
	  case 10:
	    reportProblem = "Attend to Sun is shining too bright";
	    problemCategory = "None";
	    break;
	    
	  default:
	    break;
    }
    
    
    cout << "Report contains a [" << problemCategory << "] problem: " << endl;
    cout << endl;
      ReportProblem->dispense(reportProblem);
      cout << endl;
    }
	
	
void Facade::AnnocementToCrewAndPassangers() //Crew sending messages to other members of the spaceship
{
	    AnnocementMediator * mediator = new AnnocementMediator();
	    People * captain = new Crew(mediator);
	    People * pass1 = new Passenger(mediator);
	    People * p1 = new Crew(mediator);
	    mediator->Register(captain);
	    mediator->Register(pass1);
	    mediator->Register(p1);
	     captain->Send("uniform changing on 10/10/25", true);
	      captain->Send("chess night ", false);
}

//6.5 
void Facade::FindingHabitablePlanets()
{
	cout << "==========MEDIATOR==========" << endl;
	Mediator* myNetwork = new Network();
	Colleague* myAust1 = new Fighter("A1");
	Colleague* myAust2 = new Fighter("A2");
	Colleague* myComm = new CommanderColleague("Commander47");
	
	myNetwork->addColleague(myAust1);
	myNetwork->addColleague(myAust2);
	myNetwork->addColleague(myComm);
	
	myAust1->setMediator(myNetwork);
	myAust2->setMediator(myNetwork);
	myComm->setMediator(myNetwork);
	
	myComm->setMsg("I'm  sending you to look and analyze a planet.");
	myComm->notify();

	myAust1->setMsg("I'm contacting the commander, stay put.");
	myAust1->notify("A2");
	myAust1->setMsg("All good commander");
	myAust1->notify("Commander47");

	//OBSERVER
	cout << "==========OBSERVER==========" << endl;

	Planet* newPlanet = new AnalyzedPlanet("Planet C-137");
	//myAust1->setPlanet(newPlanet);
	//myAust2->setPlanet(newPlanet);
	
	newPlanet->add(myAust1);
	newPlanet->add(myAust2);
	
	newPlanet->setState(true);
}

void Facade::StoringSpaceships()
{
	Store temp;
	Spaceship* first;
	Spaceship* second;
	first = new Battleship();
	temp.storeMemento(first->createMemento("This is a string of the first ship"));
	first = new Battleship();
	CaptainsLog* mem = temp.retreiveMemento();
	second = new Battleship();
	first->print();
	second->print();
	
}
void Facade::SimulationOfCrittters()
{
	People* people = new People();
	Friends* friends = new Friends(1);
	people->assign(friends,0);
	 Critters* result;
	 result = friends->evalute(*people);
	 result = friends->evalute(*people);
	result->evalute(*people);
}
void Facade::SurviveMechanismsToProcure()
{
	 Strategy* S =new Manufacturing() ;
	 Strategy* S1 =new Purchasing() ;
	 Strategy* S2 =new Sourcing() ;
        
        // Three contexts following different strategies
        Context *context= new Context(S);
        context->resourceAquiring();
	Context *context1= new Context(S1);
        context1->resourceAquiring();
	Context *context2= new Context(S2);
        context2->resourceAquiring();
}

Facade::~Facade()
{
	
}