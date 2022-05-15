#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n1=0, n2=0, soma=0, subtracao=0, multiplicacao=0;
	float divisao;
	char op;
	
	printf("== CALCULADORA ==\n\n");
	
	printf("\nInforme o N1: ");
	scanf("%d", &n1);
	
	printf("\n[+]- SOMA\n");
	printf("[-]- SUBTRACAO\n");
	printf("[*]- MULTIPLICACAO\n");
	printf("[/]- DIVISAO\n");

	printf("\nInforme a operacao que deseja realizar: ");
	scanf(" %c", &op);
		
	printf("\nInforme o N2: ");
	scanf("%d", &n2);
	
	soma = n1+n2;
	subtracao = n1-n2;
	multiplicacao = n1*n2;
	divisao = (float)n1/n2;
		
	if(op=='+'){
		printf("\nResultado da soma: %d", soma);
	}else{
		if(op=='-'){
			printf("\nResultado da subtracao: %d", subtracao);			
		}else{
			if(op=='*'){
				printf("\nResultado da multiplicacao: %d", multiplicacao);					
			}else{
				if(op=='/'){
					printf("\nResultado da divisao: %0.2f", divisao);
				}
			}
		}
	}
	
	return 0;
}
