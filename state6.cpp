#include "state6.h"
#include "state4.h"
#include "state5.h"
#include "state9.h"
#include <iostream>

bool State6::Transition(Automate & automate, bool isE){
    cout << "Transiton state6" << endl;
    Lexer* l = automate.GetL();
    Symbole* s = l->Consulter();
    s->Affiche();

    if(*l->Consulter() == PLUS){
        State4* state4 = new State4();
        State* state = dynamic_cast<State*> (state4);
        automate.push_back_on_pile(&state);
        automate.push_back_on_pile_symboles(l->Consulter());
        l->Avancer();
    }
    else if(*l->Consulter() == MULT){
        State5* state5 = new State5();
        State* state = dynamic_cast<State*> (state5);
        automate.push_back_on_pile(&state);
        automate.push_back_on_pile_symboles(l->Consulter());
        l->Avancer();
    }
    else if(*l->Consulter() == CLOSEPAR){
        State9* state9 = new State9();
        State* state = dynamic_cast<State*> (state9);
        automate.push_back_on_pile(&state);
        automate.push_back_on_pile_symboles(l->Consulter());
        l->Avancer();
    }
    else{
        return false;
    }

    return automate.transitionLastState();
} 
