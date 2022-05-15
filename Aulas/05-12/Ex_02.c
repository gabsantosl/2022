#include <stdio.h>

/*
Desenvolva um programa que receba um valor de 1 até 1000 e retorne o contador de 1 até o valor informado, considerando 
que nos múltiplos de 5 será impresso na tela somente M5, nos múltiplos de 10 será impresso na tela somente M10 
e nos múltiplos de 15 será impresso na tela somente M15, ou seja, sempre considerando o maior dos múltiplos.
*/

int main(){
	
	int i=0, valor=0;
	
	printf("=== CONTADOR ===\n");
	
	printf("\nInforme um valor ate 1000: ");
	scanf("%d", &valor);
	printf("\n");
	
	if(valor>1000 || valor<1){
		printf("Numero invalido.");
	}else{
		
		for(i=1;i<=valor;i++){
			if(i%15==0){
				printf("i= M15\n");
			}else{
				if(i%10==0){
					printf("i= M10\n");
				}else{
					if(i%5==0){
						printf("i= M5\n");
					}else{
						printf("i= %d\n", i);
					}
				}	
			}
		}	
	}
			
	return 0;
}
