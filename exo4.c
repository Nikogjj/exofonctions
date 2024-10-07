#include <stdio.h>

int max(int,int);

int main(){
    int a = max(55,5);

    printf("Le plus grand des deux nombres est : %d\n",a);
    
}

int max(int chiffre1, int chiffre2){
    int max;
    if (chiffre1>chiffre2)
    {
        max=chiffre1;
    }
    else{
        max=chiffre2;
    }
    
    return max;
}