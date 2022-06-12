/*
Escreva um programa que diga qual é o maior de dois números distintos.
*/

#include <stdio.h>

int main(){

    int N1=0, N2=0, i=0;

    printf("=== INFORME DOIS NUMEROS DISTINTOS ===\n\n");

    printf("N1 = ");
    scanf("%d", &N1);

    printf("N2 = ");
    scanf("%d", &N2);

	if(N1 == N2){
        do{
            printf("\nN1 e N2 precisam ser necessariamente distindos.\n");
            printf("Informe outro valor para N2 = ");
            scanf("%d", &N2);
        }while(N1 == N2);
    }
    
    if(N1 > N2){
        printf("\nO maior dos dois numeros eh o N1 = %d.", N1);
    }else{
        printf("\nO maior dos dois numeros eh o N2 = %d.", N2);
    }

    return 0;
}