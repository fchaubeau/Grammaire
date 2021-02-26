#pragma once
#include <string>
#include "state.h"

using namespace std;

class State9: public State{
    public:
        State9() : State("Etat9") {}
        bool Transition(Automate & automate, bool isE = false);
};
