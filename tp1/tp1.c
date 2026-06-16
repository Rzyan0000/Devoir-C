#include "inout.h"

void ecritBonjour(){
    ecrireString ("Bonjour\n");// print bonjour suite a inout.h
    ecrireSautDeLigne();// saut une ligne 
}

void ecrit3bonjour(){
    for (int i=1 ; i <= 3 ;i++ ){ // j'ai creer une boucle for pour affiche 3 fois bonjour je me suis aidé d'une documentation geekforgeeks pour comprendre la boucle 
        ecrireString ("Bonjour\n");// AFFICHE 3 fois bonjour
    }
    ecrireSautDeLigne();// saut une ligne 
}

void ecritSommeDeuxlireInt(){//procedure
    int a,b; // initialisation des chiffre a et b 
    a=lireInt();//prend la valeur du premiere entier du terminal
    b=lireInt();//prend la valeur du deuxieme entier du terminal
    ecrireInt(a+b);
    ecrireSautDeLigne();// saut une ligne 

}

void ecritSommeDeuxlireInt(){//procedure
    int a,b; // initialisation des chiffre a et b 
    a=lireInt();//prend la valeur du premiere entier du terminal
    b=lireInt();//prend la valeur du deuxieme entier du terminal
    ecrireInt(a+b);
    ecrireSautDeLigne();// saut une ligne 

}

void ecritDeuxFoislireInt(){
    for (int i=1 ; i < 2 ;i++ ){// boucle for pour affiché 2 fois
        ecrireInt(lireInt()); // émet 2 FOIS
    }
    ecrireSautDeLigne();// saut une ligne 
}


void ecritDeuxInt(int x, int y){
    ecrireInt(x); // affiche l'entier x
    ecrireSautDeLigne(); // saut une ligne 
    ecrireInt(y); // affiche l'entier y
    ecrireSautDeLigne();// saut une ligne 
}

void ecritSommeDeuxInt(int x, int y){
    ecrireInt(x + y);//ecrit la somme des 2 entier
    ecrireSautDeLigne();// saut une ligne
}


void ecritSommeDeuxIntBavard(int x, int y){
    ecrireInt(x); // affiche la valeur de x
    ecrireString("+");//ecrit sous forme de chaine de caractere 
    ecrireInt(y);// affiche la valeur de y  
    ecrireString("=");//ecrit sous forme de chaine de caractere
    ecrireInt(x+y); // ecrit le resultat final 
    ecrireSautDeLigne();//saut de ligne 
}


void ecritSommeTroisInt(int x, int y, int z){
    ecrireInt(x+y+z);//affiche les 3 premiers entier et les assembles
    ecrireSautDeLigne(); //saut de ligne 
}

void ecritSommeDifflireInt(){
    int a,b; // initialisation des chiffre a et b 
    a=lireInt();//prend la valeur du premiere entier du terminal
    b=lireInt();//prend la valeur du second entier du terminal
    ecrireInt(a+b);//affiche la somme des deux entiers 
    ecrireSautDeLigne();// saut de ligne 
    ecrireInt(a-b);// affiche la difference 
    ecrireSautDeLigne();// saut de ligne 
}


void main (void){ // appel de toute les fonctions
    ecritBonjour();
    ecrit3bonjour();
    ecritSommeDeuxlireInt();
    ecritDeuxFoislireInt();
    ecritDeuxInt(7,12);
    ecritSommeDeuxInt(72,82);
    ecritSommeDeuxIntBavard(50,50);
    ecritSommeTroisInt(25,25,25);
    ecritSommeDifflireInt();
}


//rzyan@Rzyan:~/dev/USAL4M/tp1$ gcc -c tp1.c
//rzyan@Rzyan:~/dev/USAL4M/tp1$ gcc inout.o tp1.o -o tp1
//rzyan@Rzyan:~/dev/USAL4M/tp1$ ./tp1 


//reference des outils utilisé 
//youtube chaine : commentcoder
//site : geekforgeek
