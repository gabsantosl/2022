/*
Escreva um programa que calcule a média dos números digitados pelo usuário, se eles forem 
pares. O programa deve terminar a leitura se o usuário digitar zero.
*/

#include <stdio.h>

int main(){

    int N1 = 0, N2 = 0, restoN1 = 0, restoN2 = 0, media = 0, cont = 0;

    printf("==== INFORME OS ALGORISMOS QUE DESEJA ====\n");

    do{
        printf("\nN1: ");
        scanf("%d", &N1);
        printf("N2: ");
        scanf("%d", &N2);
        
        restoN1 = N1 % 2;
        restoN2 = N2 % 2;
        media = (N1 + N2) / 2;

        if(restoN1 != 0 || restoN2 != 0){
            printf("\nDeseja inserir mais algorismos?");
            printf("\n0 - NAO\n1 - SIM");
            printf("\nR: ");
            scanf("%d", &cont);
        }else{
            printf("\nA media dos algorismos corresponde a %d.\n", media);
            printf("\nDeseja inserir mais algorismos?");
            printf("\n0 - NAO\n1 - SIM");
            printf("\nR: ");
            scanf("%d", &cont);
        }
        
    }while(cont != 0);
    
    return 0;
}