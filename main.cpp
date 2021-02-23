#include <iostream>
#include "lexer.h"
#include "automate.h"
#include "state.h"


int main(void) {
   string chaine("(1+34)*123");

   Lexer l(chaine);
   Automate automate(l);

   automate.GetPile().back()->Transition(automate);

   /*Symbole * s;
   while(*(s=l.Consulter())!=FIN) {
      s->Affiche();
      cout<<endl;
      l.Avancer();
   }*/
   return 0;
}

