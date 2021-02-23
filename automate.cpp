#include "automate.h"
#include "state0.h"

Automate::Automate(){
    this->pile = deque<State*>();
    this->pile.push_back(new State0());
    this->l = Lexer();
}

Automate::Automate(Lexer & l){
    this->pile = deque<State*>();
    this->pile.push_back(new State0());
    this->l = l;
}

Lexer Automate::GetL(){
    return this->l;
}

deque<State*> Automate::GetPile(){
    return this->pile;
}

void Automate::push_back_on_pile(State** state){ //Retire le dernier élément de la pile de l'automate
    this->pile.push_back(*state);
}

void Automate::pop_back_on_pile(){ //Retire le dernier élément de la pile de l'automate
    this->pile.pop_back();
}

bool Automate::transitionLastState(){
    return this->pile.back()->Transition(*this);
}