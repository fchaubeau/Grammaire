#pragma once
#include <string>
#include "state.h"

using namespace std;

class State8: public State{
    public:
        State8() : State("Etat8") {}
        bool Transition(Automate & automate, bool isE = false);
};
