#include <stdio.h>

int main() {
	
	char sair = 'n';
	int cont = 1;
	
	printf("=== ESTRUTURA DO... WHILE ===\n\n");
	
	do{
		printf("Tentativa %d\n", cont);
		printf("Deseja sair? (s/n)\n");
		scanf("%c", &sair);	
		fflush(stdin);
		cont++;
		printf("\n");
	}while(sair != 's' && cont <= 3);
	
	if(sair == 's'){
		printf("Volte Sempre!");
	}else{
		printf("Limite de tentativas atingido. Tente novamente mais tarde!");
	}
	
	return 0;
}
