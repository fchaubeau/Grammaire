#pragma once

#include <string>
#include <deque>
#include "lexer.h"
using namespace std;

class State;
class Automate{
    public:
        Automate();
        Automate(Lexer & l);
        Lexer GetL();
        deque<State*> GetPile();
        void push_back_on_pile(State** state);
        void pop_back_on_pile();
        bool transitionLastState();

    protected:
        Lexer l;
        deque<State*> pile;

};