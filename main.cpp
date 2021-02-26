#include <iostream>
#include "lexer.h"
#include "automate.h"
#include "state.h"


int main(void) {
   //string chaine("(1+34)*123");
   string chaine("1+1+2+3*5");
   cout << "Chaine à analyser : " << chaine << endl;

   Lexer l(chaine);
   Automate automate(l);

   if(automate.GetPile().back()->Transition(automate)){
      cout << endl;
      cout << "Résultat obtenu : ";
      cout << dynamic_cast<Entier*> (automate.GetPileSymboles().back())->GetValeur() << endl;;
   }
   else{
      cout << "erreur lors de la lecture de la chaîne d'entrée";
   }
   return 0;
}

