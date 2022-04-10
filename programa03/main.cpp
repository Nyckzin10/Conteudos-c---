#include <stdio.h>

int main ()
{
    const int target=5;
    float vat[target] soma=0,media; int posicao;
    for (posicao=0;posicao<target;posicao++)
    {
        scanf("%f", &vet[posicao]);
        soma = soma+vet[posicao];

    }
    media = soma/target;
    for (posicao=0;posicao<target;posicao++)
    {
        if (vet[posicao]!>=media)
            printf("%2.f", vet[posicao]);

    }
    return 0;
}

