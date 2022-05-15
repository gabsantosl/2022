#include <stdio.h>
#include <stdlib.h>

/*
Para evolu��o do nosso sistema eleitoral, informe uma idade utilizando o tipo inteiro.
Como sa�da de dados dever� ser considerado:
- Idade menor que 0 n�o nasceu
- 0 at� 15 n�o vota
- 16 ou 17 opcional
- 18 at� 64 obrigat�rio
- 65 ou mais opcional
- Exatamente 41 ganha pr�mio 1 (n�o dever� apresentar obrigat�rio)
- Exatamente 82 ganha pr�mio 2 (n�o dever� apresentar opcional)
- N�o dever� utilizar a instru��o "else if", somente "if" e "else"
- N�o dever� utilizar || (or) e && (and)
*/

int main() {
	
	int idade=0;
	
	printf("== VERIFIQUE SEU STATUS NO SISTEMA ELEITORAL ==");
	
	printf("\n\nInforme a sua idade em anos: ");
	scanf("%d", &idade);
	
	printf("\nIdade Informada: %d", idade);
	
	if(idade < 0){
			printf("\nIdade invalida.");
	}else{
		if(idade < 16){
			printf("\nVoce nao pode votar ainda.");
		}else{
			if(idade<18){
				printf("\nSeu voto e opcional.");
			}else{
				if(idade<65){
					if(idade==41){
						printf("\nVoce ganhou o premio 1!");
					}else{
						printf("\nSeu voto e obrigatorio.");
					}
				}else{ 
						if(idade==82){
							printf("\nVoce ganhou o premio 2!");
						}else{
							printf("\nSeu voto e opcional.");
						}
					}
			}
		}
	}
	
	return 0;
}
