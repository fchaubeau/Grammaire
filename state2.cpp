#include "state2.h"
#include "State3.h"
#include "state6.h"
#include <iostream>

bool State2::Transition(Automate & automate, bool isE) {
  cout << "transition state2" << endl;
    Lexer* l = automate.GetL();
    Symbole* s = l->Consulter();
    s->Affiche();
    if(isE){
        State6* state6 = new State6();
        State* state = dynamic_cast<State*> (state6);
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
