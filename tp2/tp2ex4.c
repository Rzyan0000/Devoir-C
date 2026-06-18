#include"inout.h"
#define BOOL int
#define TRUE 1
#define FALSE 0


BOOL testPlusGrandEq(int x, int y){
    if (x >= y) {
        return TRUE;
    } else {
        return FALSE;
    }
}

BOOL testPlusPetit(int x, int y){
    if (x < y) {
        return TRUE;
    } else {
        return FALSE;
    }
}

BOOL testTrie3(int x, int y, int z){
    if (x <= y && y <= z) {
        return TRUE;
    } else {
        return FALSE;
    }
}

BOOL testDeuxEgaux(int x, int y, int z, int t){
    if (x == y || x == z || x == t || y == z || y == t || z == t) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main(void){
if ( testPlusGrandEq (15, 7)) {
ecrireString ( " test testPlusGrandEq réussi: 15>= 7 ");
} else {
ecrireString ( " test testPlusGrandEq échoué: 15 < 7 " );
}
ecrireSautDeLigne();
if ( testPlusGrandEq (10, 22)) {
ecrireString ( " test testPlusGrandEq réussi: 10 < 22 " );
} else {
ecrireString ( " test testPlusGrandEq échoué: 10 >= 22 " );
}
ecrireSautDeLigne();
if ( testPlusPetit (121, 31)) {
ecrireString ( " test testPlusPetit réussi: 121 < 31 " );
} else {
ecrireString ( " test testPlusPetit échoué: 121 >= 31" );
}
ecrireSautDeLigne();
if ( testTrie3 (3, 4, 5)) {
ecrireString ( " test testTrie3 valide: trié" );
} else {
ecrireString ( " test testTrie3 échoué: non-trié" );
}
ecrireSautDeLigne();
if ( testTrie3 (6, 4, 5)) {
ecrireString ( " test testTrie3 valide: trié" );
} else {
ecrireString ( " test testTrie3 échoué: non-trié" );
}
ecrireSautDeLigne();
if ( testDeuxEgaux (3,8,2,23)) {
ecrireString ( " test2egaux réussi" );
} else {
ecrireString ( " test2egaux échoué" );
}
ecrireSautDeLigne();
if ( testDeuxEgaux (10,4,5,10)) {
ecrireString ( " test2egaux réussi" );
} else {
ecrireString ( " test2egaux échoué" );
}
ecrireSautDeLigne();
}