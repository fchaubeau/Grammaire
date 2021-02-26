#include "State3.h"
#include <iostream>

bool State3::Transition(Automate & automate, bool isE) {
    cout << "transition state3" << endl;
    Lexer* l = automate.GetL();
    Symbole* s = l->Consulter();
    s->Affiche();
    if(*l->Consulter() == PLUS){
        // On dépile
        automate.pop_back_on_pile();
        // On récupère le dernier symbole de la pile de symboles
        Entier* rawVal = dynamic_cast<Entier*> (automate.GetPileSymboles().back());
        // On supprime ce symbole de la pile de symboles
        automate.pop_back_on_pile_symboles();
        // On évalue la valeur de l'expression formée par ce ou ces symboles (trivial ici car il s'agit de E -> val)
        int val = rawVal->GetValeur();
        // On met la valeur de l'expression évaluée dans la pile de symboles.
        automate.push_back_on_pile_symboles(new Entier(val));


    }
    else if(*l->Consulter() == MULT){
        // On dépile
        automate.pop_back_on_pile();
        // On récupère le dernier symbole de la pile de symboles
        Entier* rawVal = dynamic_cast<Entier*> (automate.GetPileSymboles().back());
        // On supprime ce symbole de la pile de symboles
        automate.pop_back_on_pile_symboles();
        // On évalue la valeur de l'expression formée par ce ou ces symboles (trivial ici car il s'agit de E -> val)
        int val = rawVal->GetValeur();
        // On met la valeur de l'expression évaluée dans la pile de symboles.
        automate.push_back_on_pile_symboles(new Entier(val));

    }
    else if(*l->Consulter() == CLOSEPAR){
        // On dépile
        automate.pop_back_on_pile();
        // On récupère le dernier symbole de la pile de symboles
        Entier* rawVal = dynamic_cast<Entier*> (automate.GetPileSymboles().back());
        // On supprime ce symbole de la pile de symboles
        automate.pop_back_on_pile_symboles();
        // On évalue la valeur de l'expression formée par ce ou ces symboles (trivial ici car il s'agit de E -> val)
        int val = rawVal->GetValeur();
        // On met la valeur de l'expression évaluée dans la pile de symboles.
        automate.push_back_on_pile_symboles(new Entier(val));

    }
    else if(*l->Consulter() == FIN){
        // On dépile
        automate.pop_back_on_pile();
        // On récupère le dernier symbole de la pile de symboles
        Entier* rawVal = dynamic_cast<Entier*> (automate.GetPileSymboles().back());
        // On supprime ce symbole de la pile de symboles
        automate.pop_back_on_pile_symboles();
        // On évalue la valeur de l'expression formée par ce ou ces symboles (trivial ici car il s'agit de E -> val)
        int val = rawVal->GetValeur();
        // On met la valeur de l'expression évaluée dans la pile de symboles.
        automate.push_back_on_pile_symboles(new Entier(val));

    }
    else{
        return false;
    }

    return automate.transitionLastState(true);
}
