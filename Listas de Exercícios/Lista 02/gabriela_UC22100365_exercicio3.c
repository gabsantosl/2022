/*
Escreva um programa que calcule o consumo médio de um automóvel; são fornecidos a 
distância total percorrida e o total de combustível gasto.
*/

#include <stdio.h>

int main(){

    float distancia = 0, litros = 0, consumo = 0;

    printf("=== CONSUMO MEDIO DO SEU AUTOMOVEL ===\n\n");

    //consumo médio = distância percorrida / quantidade de litros utilizada
    printf("Informe a quantidade percorrida pelo seu carro nos ultimos 30 dias (em km): ");
    scanf("%f", &distancia);

    printf("Informe quantos litros de combustivel foram consumidos: ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    printf("\nConsumo medio do seu automovel: %.2f litros.", consumo);

    return 0;
}