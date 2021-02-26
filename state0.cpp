#include "state0.h"
#include "state1.h"
#include "state2.h"
#include "State3.h"
#include <iostream>

bool State0::Transition(Automate & automate, bool isE){
    cout << "Transiton state0" << endl;
    Lexer* l = automate.GetL();
    Symbole* s = l->Consulter();
    s->Affiche();
    if(isE){
        State1* state1 = new State1();
        State* state = dynamic_cast<State*> (state1);
        automate.push_back_on_pile(&state);
    }
    else if(*l->Consulter() == INT){
        State3* state3 = new State3();
        State* state = dynamic_cast<State*> (state3);
        automate.push_back_on_pile(&state);
        automate.push_back_on_pile_symboles(l->Consulter());
        l->Avancer();
    }
    else if(*l->Consulter() == OPENPAR){
        State2* state2 = new State2();
        State* state = dynamic_cast<State*> (state2);
        automate.push_back_on_pile(&state);
        automate.push_back_on_pile_symboles(l->Consulter());
        l->Avancer();
    }
    else{
        return false;
    }

    return automate.transitionLastState();
} 
