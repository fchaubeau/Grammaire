#pragma once
#include <string>
#include "state.h"

using namespace std;

class State4: public State{
    public:
        State4() : State("Etat4") {}
        bool Transition(Automate & automate);
};
