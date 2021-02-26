#pragma once
#include <string>
#include "state.h"

using namespace std;

class State1: public State{
    public:
        State1() : State("Etat1") {}
        bool Transition(Automate & automate, bool isE = false);
};
