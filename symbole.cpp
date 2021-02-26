#include "symbole.h"
#include <iostream>

void Symbole::Affiche() {
   cout<<Etiquettes[ident] << endl;
}

void Entier::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")" << endl;;
}

int Entier::GetValeur(){
   return this->valeur;
}

