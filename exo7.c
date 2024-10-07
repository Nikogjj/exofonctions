#include <stdio.h>
int puissance(int,int);

int main(){
    int a= puissance(5,5);
    printf("%d\n",a);
}

int puissance(int nombre, int puissance){
    int resultat=1;
    for (int i = 0; i < puissance; i++)
    {
     resultat=resultat*nombre;

    }
    return resultat;
}