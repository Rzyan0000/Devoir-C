#include "inout.h"

void f () {
ecrireString ( " Hello World \n " );
}

void g () {
    ecrireInt(lireInt());
}

void main ( void ) {
f (); // Appel a la procedure f
g (); // Appel a la procedure g
}

//important de recompiler avec gcc inout.o priseenmain.o -o priseenmain
//et ensuite ./priseenmain

//Que va faire ce programme ?
// ce programme cherche l'appel g mais ne le trouve pas et fait donc une erreur de lecture  