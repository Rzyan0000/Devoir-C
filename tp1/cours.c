#include "inout.h"

void tarifReduit(int age){
    if (age <26){ecrireString("Tarif réduit")
    }
    else {ecrireString("tarif normal")
    }
}


double calculeNoteFinale(double exam , double partiel){
    double note; if(note > 7){ ecrireInt(note + partiel)}
    return(ecrireString("validé"))
}
else(note <7){ecrireString("éliminé")}





void main(void){

    tarifReduit(22);
    tarifReduit(lireInt());
}