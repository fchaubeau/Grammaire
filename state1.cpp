#include "state1.h"
#include "state4.h"
#include "state5.h"
#include <iostream>

bool State1::Transition(Automate & automate) {
    cout << "transition state1" << endl;
    Lexer l = automate.GetL();
    Symbole* s = l.Consulter();
    s->Affiche();
    if(*l.Consulter() == PLUS){
        State4* state4 = new State4();
        State* state = dynamic_cast<State*> (state4);
        l.Avancer();
        automate.push_back_on_pile(&state);
    }
    else if(*l.Consulter() == MULT){
        State5* state5 = new State5();
        State* state = dynamic_cast<State*> (state5);
        l.Avancer();
        automate.push_back_on_pile(&state);
    }
    else if(*l.Consulter() == FIN){
        return true;
    }
    else{
        return false;
    }
    
    return automate.transitionLastState();;
}