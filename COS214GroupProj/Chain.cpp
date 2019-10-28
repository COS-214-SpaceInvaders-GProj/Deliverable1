#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

/**
    Report class defines interface for handling requests and implements successor links
*/
class Report{
    public:
        Report(): next(0){
        };
    
        void add(Report *n) {
            if (next)
                next->add(n);
            else
                next = n;
        };
    
    /**
        This function will take a report problem and determine whom (Crew member) is supposed to fix it.
    */
        virtual void dispense(string report)
        {
            if(report != "")
            {
                if(next)
                    next->dispense(report);
                else
                    cout << "Problem cannot be fixed." << endl;
            }
            else
                cout << "Problem has been fixed." << endl;

        };
    private:
        Report* next;
};

/**
    Fighter class which inherits from Report class and determines whether Fighter can fix a problem in the space station or not
*/
class FighterReport: public Report {
public:
    FighterReport(string rep):
        Report(), value(rep){};
    
    void dispense(string report)
    {
        while(report == "Change Lightbulb")
        {
            cout << "Fighter attends to " << report << endl;
            report = "";
        }

        if(report != "") cout << "Fighter cannot " << report << endl;
        Report :: dispense(report);
    }
private:
    string value;
};

/**
    Doctor class which inherits from Report class and determines whether Doctor can fix a problem in the space station or not
*/
class DoctorReport: public Report {
public:
    DoctorReport(string rep):
        Report(), value(rep){};
    
    void dispense(string report)
    {
        while(report == "Heal Injury")
        {
            cout << "Doctor attends to " << report << endl;
            report = "";
        }

        if(report != "") cout << "Doctor cannot " << report << endl;
        Report :: dispense(report);
    }
private:
    string value;
};

/**
    Engineer class which inherits from Report class and determines whether Engineer can fix a problem in the space station or not
*/
class EngineerReport: public Report {
public:
    EngineerReport(string rep):
        Report(), value(rep){};
    
    void dispense(string report)
    {
        while(report == "Repair Ship Damage")
        {
            cout << "Engineer attends to " << report << endl;
            report = "";
        }

        if(report != "") cout << "Engineer cannot " << report << endl;
        Report :: dispense(report);
    }
private:
    string value;
};

/**
    ChiefEngineer class which inherits from Report class and determines whether ChiefEngineer can fix a problem in the space station or not
*/
class ChiefEngineerReport: public Report {
public:
    ChiefEngineerReport(string rep):
        Report(), value(rep){};
    
    void dispense(string report)
    {
        while(report == "Repair Critical Ship Damage")
        {
            cout << "ChiefEngineer attends to " << report << endl;
            report = "";
        }

        if(report != "") cout << "ChiefEngineer cannot " << report << endl;
        Report :: dispense(report);
    }
private:
    string value;
};

/**
    Comms class which inherits from Report class and determines whether Comms can fix a problem in the space station or not
*/
class CommsReport: public Report {
public:
    CommsReport(string rep):
        Report(), value(rep){};
    
    void dispense(string report)
    {
        while(report == "Manage Communication Problem")
        {
            cout << "Comms attends to " << report << endl;
            report = "";
        }

        if(report != "") cout << "Comms cannot " << report << endl;
        Report :: dispense(report);
    }
private:
    string value;
};

/**
    Navigator class which inherits from Report class and determines whether Navigator can fix a problem in the space station or not
*/
class NavigatorReport: public Report {
public:
    NavigatorReport(string rep):
        Report(), value(rep){};
    
    void dispense(string report)
    {
        while(report == "Manage Location Issues")
        {
            cout << "Navigator attends to " << report << endl;
            report = "";
        }
        
        if(report != "") cout << "Navigator cannot " << report << endl;
        
        Report :: dispense(report);
    }
private:
    string value;
};


/**
    Captain class which inherits from Report class and determines whether Captain can fix a problem in the space station or not
*/
class CaptainReport: public Report {
public:
    CaptainReport(string rep):
        Report(), value(rep){};
    
    void dispense(string report)
    {
        while(report == "Attend to High Priority Issues")
        {
            cout << "Captain attends to " << report << endl;
            report = "";
        }

        if(report != "") cout << "Captain cannot " << report << endl;
        Report :: dispense(report);
    }
private:
    string value;
};


/**
    Commander of Fleet class which inherits from Report class and determines whether Commander can fix a problem in the space station or not
*/
class CommanderOfFleetReport: public Report {
public:
    CommanderOfFleetReport(string rep):
        Report(), value(rep){};
    
    void dispense(string report)
    {
        while(report == "Attend to Highest Priority Issue")
        {
            cout << "CommanderOfFleet attends to " << report << endl;
            report = "";
        }

        if(report != "") cout << "CommanderOfFleet cannot " << report << endl;
        Report :: dispense(report);
    }
private:
    string value;
};


