#include <stdio.h>
#include <stdlib.h>

/*
Para evolução do nosso sistema eleitoral, informe uma idade utilizando o tipo inteiro.
Como saída de dados deverá ser considerado:
- Idade menor que 0 não nasceu
- 0 até 15 não vota
- 16 ou 17 opcional
- 18 até 64 obrigatório
- 65 ou mais opcional
- Exatamente 41 ganha prêmio 1 (não deverá apresentar obrigatório)
- Exatamente 82 ganha prêmio 2 (não deverá apresentar opcional)
- Não deverá utilizar a instrução "else if", somente "if" e "else"
- Não deverá utilizar || (or) e && (and)
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
