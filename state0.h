#pragma once
#include <string>
#include "state.h"

using namespace std;

class State0: public State{
    public:
        State0() : State("Etat0") {}
        bool Transition(Automate & automate, bool isE = false);
};
