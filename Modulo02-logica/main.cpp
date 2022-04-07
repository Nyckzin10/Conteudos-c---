#include <stdio.h>
#include <stdlib.h>



int main (){
    int cont, num, maior;
    maior=0;
    for(cont=1;cont<=5;cont++)
    {
        printf("Digite o numero: ");
        scanf("%d", &num);
        if (num > maior)
        {
            maior=num;
        }
    }
    printf("O maior numero =  %d\n", maior);
    return 0;
}