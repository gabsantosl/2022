/*
Escreva um programa que receba dez números inteiros do teclado e diga quantos são pares e 
quantos são ímpares.
*/

#include <stdio.h>

int main(){

    int num = 0, qtdNUM = 10, cont = 0, j = 1, p = 0, i = 0;

    printf("==== INDICADOR DE NUMEROS PARES E IMPARES ====\n\n");

    while(j <= qtdNUM){
        for(cont=1;cont<=10;cont++){
            printf("Informe o algorismo %d: ", j);
            j++;
            scanf("%d", &num);

            if(num % 2 == 0){
                printf("ALGORISMO PAR.\n\n");
                p++;
            }else{
                printf("ALGORISMO IMPAR.\n\n");
                i++;
            }
        }
    }

    if(p > 1 && i > 1){
        printf("Foram contabilizados %d numeros pares e %d numeros impares.", p, i);
    }else{
        if(p <= 1){
        if(p == 0){
        printf("Foram cotabilizados %d numeros impares. Nenhum numero par foi encontrado.", i);
        }else{
            printf("Foram contabilizados %d numero par e %d numeros impares.", p, i);
        }
        }else{
            if(i <= 1){
                if(i == 0){
                printf("Foram cotabilizados %d numeros pares. Nenhum numero impar foi encontrado.", p);
                }else{
                    printf("Foram contabilizados %d numeros pares e %d numero impar.", p, i);
                }
            }
        }
    }
    
    return 0;
}
