#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float n1, n2, divisao, soma, subtracao, multiplicacao;
	char op;
	
	printf("== CALCULADORA ==\n\n");
	
	printf("\nInforme o N1: ");
	scanf("%f", &n1);
	
	printf("\n[+]- SOMA\n");
	printf("[-]- SUBTRACAO\n");
	printf("[*]- MULTIPLICACAO\n");
	printf("[/]- DIVISAO\n");

	printf("\nInforme a operacao que deseja realizar: ");
	scanf(" %c", &op);
		
	printf("\nInforme o N2: ");
	scanf("%f", &n2);
	
	soma = (float)n1+n2;
	subtracao = (float)n1-n2;
	multiplicacao = (float)n1*n2;
	divisao = (float)n1/n2;
		
	if(op=='+'){
		printf("\nResultado da soma: %.2f", soma);
	}else{
		if(op=='-'){
			printf("\nResultado da subtracao: %.2f", subtracao);			
		}else{
			if(op=='*'){
				printf("\nResultado da multiplicacao: %.2f", multiplicacao);					
			}else{
				if(op=='/'){
					if(n2==0){
						printf("\nDivisao invalida.");
					}else{
						printf("\nResultado da divisao: %.2f", divisao);
					}
				}else{
					printf("\nOperacao invalida.");
				}
			}
		}
	}
	
	return 0;
}
