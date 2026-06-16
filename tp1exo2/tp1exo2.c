#include "inout.h"

//3
int ecritSommeDeuxlireInt(){//procedure
    int a,b; // initialisation des chiffre a et b 
    a=lireInt();//prend la valeur du premiere entier du terminal
    b=lireInt();//prend la valeur du deuxieme entier du terminal
    return a+b; // Retourne la somme des deux entiers
    
}

//6
int ecritSommeDeuxInt(int x, int y){
    return x + y;   // Retourne la somme des deux entiers
}

//7
int ecritSommeDeuxIntBavard(int x, int y){
    ecrireInt(x);   // Ecrit le premier entier
    ecrireString(" + ");    // Ecrit + sous forme de chaîne de caractères
    ecrireInt(y);   // Ecrit le deuxième entier
    ecrireString(" = ");    // Ecrit = sous forme de chaîne de caractères
    return x + y;    // Retourne la somme des deux entiers
}

//8
int ecritSommeTroisInt(int x, int y, int z){
    return x + y + z;   // Ecrit la somme des trois entiers
    ecrireSautDeLigne();    // Ecrit un saut de ligne
}

//9
int ecritSommeDifflireInt(){
    int a, b;
    a = lireInt();    // Lit un entier et l'affecte à la variable a
    b = lireInt();    // Lit un autre entier et l'affecte à la variable b
    ecrireInt(a + b);    // Ecrit la somme des deux entiers
    ecrireSautDeLigne();    // Ecrit un saut de ligne
    return a - b;    // Retourne la différence des deux entiers
    ecrireSautDeLigne();    // Ecrit un saut de ligne
}

void main (void){       // Appel de toutes les fonctions
    int resultat1 = ecritSommeDeuxlireInt();  // Stocke le résultat retourné par la fonction
    ecrireInt(resultat1);            // Affiche le résultat
    ecrireSautDeLigne();            // Ecrit un saut de ligne   

    int resultat2 = ecritSommeDeuxInt(5, 10);  // Stocke le résultat retourné par la fonction
    ecrireInt(resultat2);            // Affiche le résultat
    ecrireSautDeLigne();    // Ecrit un saut de ligne

    int resultat3 = ecritSommeDeuxIntBavard(5, 10);  // Stocke le résultat retourné par la fonction
    ecrireInt(resultat3);            // Affiche le résultat
    ecrireSautDeLigne();    // Ecrit un saut de lignegcc inout.o tp1.o -o tp1

    int resultat4 = ecritSommeTroisInt(5, 10, 15);  // Stocke le résultat retourné par la fonction
    ecrireInt(resultat4);            // Affiche le résultat
    ecrireSautDeLigne();    // Ecrit un saut de ligne
    
    int resultat5 = ecritSommeDifflireInt();  // Stocke le résultat retourné par la fonction
    ecrireInt(resultat5);            // Affiche le résultat
    ecrireSautDeLigne();    // Ecrit un saut de ligne
}

// 36789    