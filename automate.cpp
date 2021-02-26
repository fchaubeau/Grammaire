#include "automate.h"
#include "state0.h"

Automate::Automate(){
    this->pile = deque<State*>();
    this->pile.push_back(new State0());
    this->pile_symboles = deque<Symbole*>();
    this->l = Lexer();
}

Automate::Automate(Lexer & l){
    this->pile = deque<State*>();
    this->pile.push_back(new State0());
    this->l = l;
}

Lexer* Automate::GetL(){
  return &(this->l);
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

bool Automate::transitionLastState(bool isE){
    return this->pile.back()->Transition(*this,isE);
}

void Automate::push_back_on_pile_symboles(Symbole* symbole){
    this->pile_symboles.push_back(symbole);
}

void Automate::pop_back_on_pile_symboles(){
    this->pile_symboles.pop_back();
}

deque<Symbole*> Automate::GetPileSymboles(){
    return this->pile_symboles;
}
