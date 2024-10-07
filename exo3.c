#include <stdio.h>

int pairouimpair(int);

int main(){
    int chiffre=7;
    int a = pairouimpair(chiffre);

    if (a==1)
    {
     printf("Le chiffre %d est pair\n",chiffre);
    }
    else{
        printf("le chiffre %d est impair\n",chiffre);
    }
    
}

pairouimpair(int to){
    int pairouimpair;
    if (to%2==0)
    {
        pairouimpair=1;
    }
    else{
        pairouimpair=0;
    }
    return pairouimpair;
}