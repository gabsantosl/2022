/*
Escreva um programa que resolva o seguinte problema: uma cópia “xerox” custa R$ 0,25 por
folha, mas acima de 100 folhas esse valor cai para R$ 0,20 por unidade. Dado o total de cópias,
informe o valor a ser pago.
*/

#include <stdio.h>

int main(){

    int copias;
    float valorFINAL;

    printf("=== COPIADORA ===\n\n");

    printf("Quantas copias deseja realizar?\n");
    printf("R: ");
    scanf("%d", &copias);
    
    if(copias >= 100){
        valorFINAL = 0.25 * copias;
    }else{
        valorFINAL = 0.20 * copias;
    }
  
    printf("\nQuantidade de copias: %d.", copias);
    printf("\nValor a se pagar: R$ %.2f.", valorFINAL);

    return 0;           
}