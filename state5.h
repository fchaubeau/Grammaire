#pragma once
#include <string>
#include "state.h"

using namespace std;

class State5: public State{
    public:
        State5() : State("Etat5") {}
        bool Transition(Automate & automate, bool isE = false);
};
