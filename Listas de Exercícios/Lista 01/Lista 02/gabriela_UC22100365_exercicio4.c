/*
Escreva um programa que conceda um aumento de 10% ao salário dos funcionários de uma 
empresa, os quais recebem até R$ 1.000,00.
*/

#include <stdio.h>

int main(){

    float salarioINICIAL = 0, aumento = 0, salarioFINAL = 0;

    printf("=== AUMENTO DE SALARIO ===\n\n");

    printf("\nInforme o seu salario: ");
    scanf("%f", &salarioINICIAL);

    aumento = salarioINICIAL / 10.00;
    salarioFINAL = salarioINICIAL + aumento;

    if(salarioINICIAL >= 1000){
        printf("Voce nao tem direito a um aumento.");
    }else{
        printf("Seu novo salario totaliza em R$ %.2f.", salarioFINAL);
    }

    return 0;
}