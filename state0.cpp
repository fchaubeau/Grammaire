#include "state0.h"
#include "state2.h"
#include "State3.h"
#include <iostream>

bool State0::Transition(Automate & automate){
    cout << "Transiton Etat0" << endl;
    Lexer l = automate.GetL();
    Symbole* s = l.Consulter();
    s->Affiche();
    if(*l.Consulter() == INT){
        State3* state3 = new State3();
        State* state = dynamic_cast<State*> (state3);
        l.Avancer();
        automate.push_back_on_pile(&state);
    }
    else if(*l.Consulter() == OPENPAR){
        State2* state2 = new State2();
        State* state = dynamic_cast<State*> (state2);
        l.Avancer();
        automate.push_back_on_pile(&state);
    }
    else{
        return false;
    }

    return automate.transitionLastState();;
} 
