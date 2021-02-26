#include "state7.h"
#include "state5.h"
#include <iostream>

bool State7::Transition(Automate & automate, bool isE) {
    cout << "transition state7" << endl;
    Lexer* l = automate.GetL();
    Symbole* s = l->Consulter();
    s->Affiche();
    if(*l->Consulter() == PLUS){ // On est dans le cas E -> E + E
        // On dépile 3 fois les états
        automate.pop_back_on_pile();
        automate.pop_back_on_pile();
        automate.pop_back_on_pile();
        // On récupère le dernier symbole de la pile de symboles
        Entier* rawVal1 = dynamic_cast<Entier*> (automate.GetPileSymboles().back());
        // On supprime ce symbole de la pile de symboles
        automate.pop_back_on_pile_symboles();
        // On supprime le symbole suivant car on sait que ce sera un + 
        automate.pop_back_on_pile_symboles();
        // On récupère la deuxième valeur de l'expression
        Entier* rawVal2 = dynamic_cast<Entier*> (automate.GetPileSymboles().back());
        // On supprime ce symbole de la pile des symboles
        automate.pop_back_on_pile_symboles();

        // On évalue la valeur de l'expression formée par ce ou ces symboles (ie on fait la somme des deux nombres)
        int val = rawVal1->GetValeur() + rawVal2->GetValeur();
        // On met la valeur de l'expression évaluée dans la pile de symboles.
        automate.push_back_on_pile_symboles(new Entier(val));
        return automate.transitionLastState(true);
    }
    else if(*l->Consulter() == MULT){
        State5* state5 = new State5();
        State* state = dynamic_cast<State*> (state5);
        automate.push_back_on_pile(&state);
        automate.push_back_on_pile_symboles(l->Consulter());
        l->Avancer();
        return automate.transitionLastState();
    }
    else if(*l->Consulter() == CLOSEPAR){
        // On dépile 3 fois les états
        automate.pop_back_on_pile();
        automate.pop_back_on_pile();
        automate.pop_back_on_pile();
        // On récupère le dernier symbole de la pile de symboles
        Entier* rawVal1 = dynamic_cast<Entier*> (automate.GetPileSymboles().back());
        // On supprime ce symbole de la pile de symboles
        automate.pop_back_on_pile_symboles();
        // On supprime le symbole suivant car on sait que ce sera un + 
        automate.pop_back_on_pile_symboles();
        // On récupère la deuxième valeur de l'expression
        Entier* rawVal2 = dynamic_cast<Entier*> (automate.GetPileSymboles().back());
        // On supprime ce symbole de la pile des symboles
        automate.pop_back_on_pile_symboles();

        // On évalue la valeur de l'expression formée par ce ou ces symboles (ie on fait la somme des deux nombres)
        int val = rawVal1->GetValeur() + rawVal2->GetValeur();
        // On met la valeur de l'expression évaluée dans la pile de symboles.
        automate.push_back_on_pile_symboles(new Entier(val));
        return automate.transitionLastState(true);
    }
    else if(*l->Consulter() == FIN){
        // On dépile 3 fois les états
        automate.pop_back_on_pile();
        automate.pop_back_on_pile();
        automate.pop_back_on_pile();
        // On récupère le dernier symbole de la pile de symboles
        Entier* rawVal1 = dynamic_cast<Entier*> (automate.GetPileSymboles().back());
        // On supprime ce symbole de la pile de symboles
        automate.pop_back_on_pile_symboles();
        // On supprime le symbole suivant car on sait que ce sera un + 
        automate.pop_back_on_pile_symboles();
        // On récupère la deuxième valeur de l'expression
        Entier* rawVal2 = dynamic_cast<Entier*> (automate.GetPileSymboles().back());
        // On supprime ce symbole de la pile des symboles
        automate.pop_back_on_pile_symboles();

        // On évalue la valeur de l'expression formée par ce ou ces symboles (ie on fait la somme des deux nombres)
        int val = rawVal1->GetValeur() + rawVal2->GetValeur();
        // On met la valeur de l'expression évaluée dans la pile de symboles.
        automate.push_back_on_pile_symboles(new Entier(val));
        return automate.transitionLastState(true);
    }

    return false;
}