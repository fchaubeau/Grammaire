#pragma once

#include <string>
#include <deque>
#include "lexer.h"
#include "symbole.h"
using namespace std;

class State;
class Automate{
    public:
        Automate();
        Automate(Lexer & l);
        Lexer* GetL();
        deque<State*> GetPile();
        deque<Symbole*> GetPileSymboles();
        void push_back_on_pile(State** state);
        void pop_back_on_pile();
        void push_back_on_pile_symboles(Symbole* symbole);
        void pop_back_on_pile_symboles();
        bool transitionLastState(bool isE = false);

    protected:
        Lexer l;
        deque<State*> pile;
        deque<Symbole*> pile_symboles;
  

};
