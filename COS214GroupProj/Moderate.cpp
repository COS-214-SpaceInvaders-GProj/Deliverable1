#include "Moderate.h"
#include "Substantial.h"

void Moderate::handleChange(/*Spacestation* c*/) {
    Spacestation::instance().setState(new Substantial());
}

string Moderate::getThreatLevel() {
    return "Moderate";

}

Moderate::~Moderate()
{}