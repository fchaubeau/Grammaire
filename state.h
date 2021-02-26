#pragma once
#include <string>
#include "automate.h"
#include "lexer.h"

using namespace std;

class State{
    public:
        State(string name="") : name(name){}
        State() {}
        virtual bool Transition(Automate & automate, bool isE = false)=0;
    protected:
        string name;
};