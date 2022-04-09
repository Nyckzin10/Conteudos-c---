#include <stdio.h>
#include <stdlib.h>


int main () {
    int num, maior, ind;
    
    maior = 0;

    for(ind=1; ind <=100;  ind=ind+1)
    {
        scanf("%d", &num);
        
        if (num > maior)
        
        maior = num; 
    }

    printf("%d /  n e maior dos numeros lidos: e ", maior);
    return 0; 
}

