#include <stdio.h>

int factorielle(int);

int main(){
    int chiffre=5;
    int a = factorielle(chiffre);

    printf("Voici la factorielle de %d : %d\n",chiffre,a);
}

int factorielle(int to){

    int factorielle=1;
    int i;
    for (int i = to; i > 0 ; i--)
    {
        factorielle=factorielle*i;
        printf("%d\n",factorielle);
    }
    
    return factorielle;
}