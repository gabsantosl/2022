#include <stdio.h>

/*
Desenvolva um programa que receba um valor de 1 até 500 e retorne o contador de 1 até o valor informado, 
considerando que nos múltiplos de 7 será impresso na tela somente M7.
*/

int main(){
	
	int i=0, valor=0;
	
	printf("=== CONTADOR ===\n");
	
	printf("\nInforme um valor ate 500: ");
	scanf("%d", &valor);
	printf("\n");
	
	if(valor>500 || valor<1){
		printf("Numero invalido.");
	}else{
		
		for(i=1;i<=valor;i++){
			if(i%7==0){
				printf("i= M7\n");
			}else{
				printf("i= %d\n", i);	
			}
		}	
	}
			
	return 0;
}
