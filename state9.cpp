#include "state9.h"
#include <iostream>

bool State9::Transition(Automate & automate, bool isE){
    cout << "Transiton state6" << endl;
    Lexer* l = automate.GetL();
    Symbole* s = l->Consulter();
    s->Affiche();
    if(*l->Consulter() == PLUS){ // On est dans le cas E -> (E)
        // On dépile 3 fois les états
        automate.pop_back_on_pile();
        automate.pop_back_on_pile();
        automate.pop_back_on_pile();
        // On supprime le dernier symbole de la pile de symboles car on sait que c'est un ')'
        automate.pop_back_on_pile_symboles();
        // On récupère le symbole suivant
        Entier* rawVal = dynamic_cast<Entier*> (automate.GetPileSymboles().back());
        // Puis on le supprime de la pile des symboles
        automate.pop_back_on_pile_symboles();
        // On supprime le symbole suivant de la pile des symboles car on sait que c'est un '('
        automate.pop_back_on_pile_symboles();

        // On évalue la valeur de l'expression formée par ce ou ces symboles (trivial car il s'agit d'une valeur entre parenthèses)
        int val = rawVal->GetValeur();
        // On met la valeur de l'expression évaluée dans la pile de symboles.
        automate.push_back_on_pile_symboles(new Entier(val));
        return automate.transitionLastState(true);
    }
    else if(*l->Consulter() == MULT){ // On est dans le cas E -> (E)
        // On dépile 3 fois les états
        automate.pop_back_on_pile();
        automate.pop_back_on_pile();
        automate.pop_back_on_pile();
        // On supprime le dernier symbole de la pile de symboles car on sait que c'est un ')'
        automate.pop_back_on_pile_symboles();
        // On récupère le symbole suivant
        Entier* rawVal = dynamic_cast<Entier*> (automate.GetPileSymboles().back());
        // Puis on le supprime de la pile des symboles
        automate.pop_back_on_pile_symboles();
        // On supprime le symbole suivant de la pile des symboles car on sait que c'est un '('
        automate.pop_back_on_pile_symboles();

        // On évalue la valeur de l'expression formée par ce ou ces symboles (trivial car il s'agit d'une valeur entre parenthèses)
        int val = rawVal->GetValeur();
        // On met la valeur de l'expression évaluée dans la pile de symboles.
        automate.push_back_on_pile_symboles(new Entier(val));
        return automate.transitionLastState(true);
    }
    else if(*l->Consulter() == CLOSEPAR){ // On est dans le cas E -> (E)
        // On dépile 3 fois les états
        automate.pop_back_on_pile();
        automate.pop_back_on_pile();
        automate.pop_back_on_pile();
        // On supprime le dernier symbole de la pile de symboles car on sait que c'est un ')'
        automate.pop_back_on_pile_symboles();
        // On récupère le symbole suivant
        Entier* rawVal = dynamic_cast<Entier*> (automate.GetPileSymboles().back());
        // Puis on le supprime de la pile des symboles
        automate.pop_back_on_pile_symboles();
        // On supprime le symbole suivant de la pile des symboles car on sait que c'est un '('
        automate.pop_back_on_pile_symboles();

        // On évalue la valeur de l'expression formée par ce ou ces symboles (trivial car il s'agit d'une valeur entre parenthèses)
        int val = rawVal->GetValeur();
        // On met la valeur de l'expression évaluée dans la pile de symboles.
        automate.push_back_on_pile_symboles(new Entier(val));
        return automate.transitionLastState(true);
    }
    else if(*l->Consulter() == FIN){ // On est dans le cas E -> (E)
        // On dépile 3 fois les états
        automate.pop_back_on_pile();
        automate.pop_back_on_pile();
        automate.pop_back_on_pile();
        // On supprime le dernier symbole de la pile de symboles car on sait que c'est un ')'
        automate.pop_back_on_pile_symboles();
        // On récupère le symbole suivant
        Entier* rawVal = dynamic_cast<Entier*> (automate.GetPileSymboles().back());
        // Puis on le supprime de la pile des symboles
        automate.pop_back_on_pile_symboles();
        // On supprime le symbole suivant de la pile des symboles car on sait que c'est un '('
        automate.pop_back_on_pile_symboles();

        // On évalue la valeur de l'expression formée par ce ou ces symboles (trivial car il s'agit d'une valeur entre parenthèses)
        int val = rawVal->GetValeur();
        // On met la valeur de l'expression évaluée dans la pile de symboles.
        automate.push_back_on_pile_symboles(new Entier(val));
        return automate.transitionLastState(true);
    }
    return false;
} 
