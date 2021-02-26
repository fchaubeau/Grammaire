#include "state5.h"
#include "state2.h"
#include "state8.h"
#include "State3.h"
#include <iostream>

bool State5::Transition(Automate & automate, bool isE) {
    cout << "transition state5" << endl;
    Lexer* l = automate.GetL();
    Symbole* s = l->Consulter();
    s->Affiche();
    if(isE){
        State8* state8 = new State8();
        State* state = dynamic_cast<State*> (state8);
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