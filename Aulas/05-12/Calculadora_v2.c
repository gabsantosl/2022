#include <stdio.h>
#include <stdlib.h>

/*

- Molde switch case -

switch(variavel){
	case '1':
		ação
	break;
	case '2':
		ação
	break;
}

*/

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
	
	switch(op){
		case '+':
			printf("\nResultado da soma: %.2f", soma);
		break;
		case '-':
			printf("\nResultado da subtracao: %.2f", subtracao);
		break;
		case '*':
			printf("\nResultado da multiplicacao: %.2f", multiplicacao);
		break;
		case '/':
			if(n2==0){
				printf("\nDivisao invalida.");
				}else{
					printf("\nResultado da divisao: %.2f", divisao);
				}
		break;
		default :
			printf("\nOperacao invalida.");
	}
	
	return 0;
	
}
