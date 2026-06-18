#include "inout.h"
//--------------------------------------------------------1--------------------------------------------------------------------
//1

void ecritMax(int x, int y){
    if (x > y){
        ecrireString(" le nombre le plus grand est : ");
        ecrireInt(x);
        ecrireSautDeLigne();
    }
    else if (y > x){
        ecrireString(" le nombre le plus grand est : ");
        ecrireInt(y);
        ecrireSautDeLigne();
    }
    else if (y=x){
        ecrireString("les deux nombre sont égaux : ");
        ecrireInt(y);
        ecrireSautDeLigne();
    }
}
// dans 1 je me suis inspirer de l'exemple que vous avez mis sur le tp2

//2
void ecritTestPlusGrandEq(int x, int y){
    if(x > y){
        ecrireInt (y);
        ecrireString(" n'est pas plus grand que ");
        ecrireInt(x);
        ecrireSautDeLigne();
    }
    else { // else et l'inverse de if car il a une condtion donc pas besoin de ajouter if(y > x)
        ecrireInt(x);
        ecrireString(" n'est pas plus grand que  ");
        ecrireInt(y);
        ecrireSautDeLigne();
    }

}

//3
void ecritTestPlusPetit(int x, int y){
    if(x < y){
        ecrireInt (x);
        ecrireString(" est plus petit que ");
        ecrireInt(y);
        ecrireSautDeLigne();
    }
    else if (y < x){ 
        ecrireInt(y);
        ecrireString(" est plus petit que  ");
        ecrireInt(x);
        ecrireSautDeLigne();
    }


}


//4
void ecritTrie3(int x, int y, int z){
    ecrireInt(x);
    ecrireString(", ");
    ecrireInt(y);
    ecrireString(", ");
    ecrireInt(z);
    if(x<=y<=z){
        ecrireString (" sont trié");
        ecrireSautDeLigne();
    }
    else{
        ecrireString (" ne sont pas trié"); 
        ecrireSautDeLigne();      
    }

}


//5
void ecritMax3(int x, int y, int z){
if(x>y  && x>z){ecrireString(" le nombre le plus grand est : ");
    ecrireInt(x);
    ecrireSautDeLigne(); 
}
else if(y>x  && y>z){ecrireString(" le nombre le plus grand est : ");
    ecrireInt(y);
    ecrireSautDeLigne(); 
}
else if(z>x && z>y){ecrireString(" le nombre le plus grand est : ");
    ecrireInt(z);
    ecrireSautDeLigne(); 
}
}



//6
void ecritTestDeuxEgaux(int x, int y, int z, int t){
        if(x==y || x==z || x==t || y==z || y==t || z==t ){
        ecrireString("2 paramètres égaux");
    }
    else{
        ecrireString("aucun paramètre égaux");
    }
    ecrireSautDeLigne();
}

//7
void ecritPlusSommeProd(int z, int t){
    if(z+t <z*t){
        ecrireInt(z*t);
    }
    else{
        ecrireInt(z+t);
    }
    ecrireSautDeLigne();
}

//-------------------------------------------------------------------------------------------------------------3------------------------------------------
//1
int SommeTroisInt(int x, int y, int z){//procedure
    int a,b,c; // initialisation des chiffre a et b 
    a=lireInt();//prend la valeur du premiere entier du terminal
    b=lireInt();//prend la valeur du deuxieme entier du terminal
    c=lireInt();//prend la valeur du troisieme entier du terminal
    ecrireInt(a+b+c);
    ecrireSautDeLigne();// saut une ligne 
}
//2
int max2(int x, int y){
    if(x>y){return(x);
    }
    else if(x<y){return(y);
    }
    else if (y=x){return(y);
    }
}
//3
int max3(int x,int y,int z){
    if(x>y && y>z){return x;
    }
    else if (y>z && x>z){return y;
    }
    else if (z>y && y>x){return z;
    }
}

//4
int PlusSommeProd(int z, int t){
    if (z+t<z*t){return z*t;
    }
    else{return z+t;
    }
}


void main(void){
  //----------1--------TERMINAL//
    ecritMax(3, 3);  
    ecritTestPlusGrandEq(5, 10);
    ecritTestPlusPetit(3,4);
    ecritTrie3(1,2,3);
    ecritMax3(122,3,123);
    ecritTestDeuxEgaux(1,2,3,4);
    ecritPlusSommeProd(33,43);
    //----------3---------TERMINAL//
    SommeTroisInt(1,2,3);
    max2(23,21);
    max3(32,99,21);
    PlusSommeProd(23,44);
  //----------2------------------------------------------------------------------------------------------------------------------------------//
    ecrireString("====MENU===");
    ecrireSautDeLigne();
    ecrireString("1- ecritMax \n");
    ecrireString("2-ecritTestPlusGrandEq \n");
    ecrireString("3-ecritTestPlusPetit\n");
    ecrireString("4-ecritTrie3\n");
    ecrireString("5-ecritMax3\n");
    ecrireString("6-ecritTestDeuxEgaux\n");
    ecrireString("7-ecritPlusSommeProd\n");

    int numero=lireInt();
    if(numero==1){
        ecrireString("velliez séléctionner x\n");
        int x=lireInt();
        ecrireString("velliez séléctionner y\n");
        int y=lireInt();
        ecritMax(x,y);
    };
    if(numero==2){
        ecrireString("veuillez ecrire x\n");
        int x=lireInt();
        ecrireString("veuillez ecrire y\n");
        int y=lireInt();
        ecritTestPlusGrandEq(x,y);
    };
    if(numero==3){
        ecrireString("veuillez ecrire x\n");
        int x=lireInt();
        ecrireString("veuillez ecrire y\n");
        int y=lireInt();
        ecritTestPlusPetit(x,y);
    };
    if(numero==4){
        ecrireString("veuillez ecrire x\n");
        int x=lireInt();
        ecrireString("veuillez ecrire y\n");
        int y =lireInt();
        ecrireString("veuillez ecrire z\n");
        int z =lireInt();
        ecritTrie3(x,y,z);        
    };
    if(numero==5){
        ecrireString("veuillez ecrire x\n");
        int x=lireInt();
        ecrireString("veuillez ecrire y\n");
        int y =lireInt();
        ecrireString("veuillez ecrire z\n");
        int z =lireInt();
        ecritMax3(x,y,z);
    };
    if(numero==6){
        ecrireString("veuillez ecrire x\n");
        int x=lireInt();
        ecrireString("veuillez ecrire y\n");
        int y =lireInt();
        ecrireString("veuillez ecrire z\n");
        int z =lireInt();
        ecrireString("veuillez ecrire t\n");
        int t=lireInt();
        ecritTestDeuxEgaux(x,y,z,t);
    };
    if(numero==7){
        ecrireString("velliez séléctionner x\n");
        int x=lireInt();
        ecrireString("velliez séléctionner y\n");
        int y=lireInt();
        ecritPlusSommeProd(x,y);
    };

}

