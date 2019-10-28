#include "Critical.h"
#include "Moderate.h"
void Critical::handleChange(/*Spacestation* c*/) {
   Spacestation::instance().setState(new Moderate());
}

string Critical::getThreatLevel() {
    return "Critical";
}

Critical:: ~Critical()
{}
