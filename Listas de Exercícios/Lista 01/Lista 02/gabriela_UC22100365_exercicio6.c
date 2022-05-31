/*
Escreva um programa que receba dez números inteiros do teclado e diga quantos são pares e 
quantos são ímpares.
*/

#include <stdio.h>

int main(){

    int num = 0, qtdNUM = 10, i = 0, j = 1;

    printf("==== INDICADOR DE NUMEROS PARES E IMPARES ====\n\n");

    while(j <= qtdNUM){
        for(i=1;i<=10;i++){
            printf("Informe o algorismo %d: ", j);
            j++;
            scanf("%d", &num);

            if(num % 2 == 0){
                printf("ALGORISMO PAR.\n\n");
            }else{
                printf("ALGORISMO IMPAR.\n\n");
            }
        }
    }

    return 0;
}
