#include <stdio.h>

/*
Desenvolva mu programa que receba um valor de 1 até 200 e retorne o contador de 1 até o valor informado, considerando 
que nos múltiplos de 5 será impresso na tela M - *, onde a quantidade de asterísticos correspondeao valor.
*/

int main(){

    int valor=0, i=0, j=0;

    printf("=== CONTADOR ===\n");

    printf("\nInforme um valor ate 200: ");
    scanf("%d", &valor);
    printf("\n");

    if(valor>200 || valor<1){
        printf("Numero Invalido.");
    }else{
        for(i=1;i<=valor;i++){
            if(i%5==0){
                printf("i = M - ");
                for(j=1;j<=i;j++){
                    printf("*");
                }
                printf("\n");
            }else{
                printf("i = %d\n", i);
            }
        }
    }

    return 0;
}