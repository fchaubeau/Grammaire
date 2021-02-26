#pragma once
#include <string>
#include "state.h"

using namespace std;

class State7: public State{
    public:
        State7() : State("Etat7") {}
        bool Transition(Automate & automate, bool isE = false);
};
