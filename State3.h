#pragma once
#include <string>
#include "state.h"

using namespace std;

class State3: public State{
    public:
        State3() : State("Etat3") {}
        bool Transition(Automate & automate);
};
