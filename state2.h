#pragma once
#include <string>
#include "state.h"

using namespace std;

class State2: public State{
    public:
        State2() : State("Etat2") {}
        bool Transition(Automate & automate, bool isE = false);
};
