#include <stdio.h>
#include <stdlib.h>

int main (){

    int num, cont;

    printf("Digite um numero:");

    scanf("%d", &num);

    for(cont=1;cont<=100;cont=cont+1)
    {
        printf ("\n Numero = %d", num);

    }

    return 0;
}   


