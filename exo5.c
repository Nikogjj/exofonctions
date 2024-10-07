#include <stdio.h>

// demander probleme sommetableau

int sommetableau(int tab[], int taille){
    int somme;
    for (int i = 0; i < taille; i++)
    {
        somme=tab[i]+somme;
    }
    
    return somme;
}

int main(){
    int tab[5]={1,1,5,1,1};
    int a = sommetableau(tab,5);

    printf("La somme du tableau est egale à : %d\n",a);
    
}