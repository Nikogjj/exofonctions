#include <stdio.h>

int somme(int,int);

int main(){
    int a = somme(4,5);

    printf("Voici la somme %d\n",a);
}

int somme(int from, int to){

    int addition=from+to;
    return addition;
}