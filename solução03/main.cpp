#include <stdio.h>
#include <stdlib.h>

int main (){
    int num;
    do 
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num !=0){
            printf("O numero = %d", num);
        }
    }
    while (num!=0);
    return 0;  
}


