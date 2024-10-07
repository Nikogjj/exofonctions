#include <stdio.h>
// demander comment faire pour que le noombre de note soit dynamique
float moyenne(float,float,float,int);

int main(){
    float a= moyenne(15,15,5,3);
    printf("%.3f\n",a);
}

float moyenne(float a,float b,float c,int nombredenotes){
    float total=a+b+c;
    float moyenne=total/nombredenotes;
    return moyenne;
    
}