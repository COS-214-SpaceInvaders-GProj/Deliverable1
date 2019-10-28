#include "Observer.h"
#include "Bridge.h"

//using namespace std;

void Observer::update()
{
	state = bridgeState->getBridgeState();
}