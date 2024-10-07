#include <stdio.h>

char* inverser(char str[]){
    char strinverser[]={};
    int j=0;
    for (int i = sizeof str; i != 0; i--)
    {
        strinverser[j]=str[i];
        j++;
    }

    return strinverser;
}

int main(){
    char str[]={'a','b','c',0};
    inverser(str);
}