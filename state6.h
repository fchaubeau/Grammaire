#pragma once
#include <string>
#include "state.h"

using namespace std;

class State6: public State{
    public:
        State6() : State("Etat6") {}
        bool Transition(Automate & automate, bool isE = false);
};
