#include <stdio.h>
#include <stdlib.h>



int main () {

    int vet [100], posicao;

    for(posicao=1;posicao<=100;posicao++)

    {
        scanf("%d", &vet[posicao]);
    }
    for(posicao=1;posicao<=100;posicao--)
    {
        printf("%d \n", vet[posicao]);
    }
    return 0;
}
