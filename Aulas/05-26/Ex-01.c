#include <stdio.h>

/*
Elabore um programa "Campeonato de Algo" onde será informada a quantidade de times que particpará
do campeonato, a quantidade de jogadores por time e o nome do esporte.

Nome do esporte: Futsal
Qtd de jogadores: 5
Qtd de times: 4

== Campeonato de Futsal ==
# TIME 1:
J1, J2, J3, J4, J5.

# TIME 2:
J1, J2, J3, J4, J5.

# TIME 3:
J1, J2, J3, J4, J5.

# TIME 4:
J1, J2, J3, J4, J5.
*/

int main() {
	
	int qtdTIME=0, qtdJOG=0, i=1, j=1;
	char sport[30];
	
	printf("=== REGISTRO DE CAMPEONATO ===\n\n");
	
	printf("Informe a modabilidade do campeonato: ");
	scanf(" %[^\n]s", &sport);
	
	printf("\nInforme a quantidade de times: ");
	scanf("%d", &qtdTIME);
	
	printf("Informe a quantidade de jogadores por time: ");
	scanf("%d", &qtdJOG);
	
	system("cls");
	
	printf("=== Campeonato de %s ===\n\n", sport);
	printf("Quantidade de times: %d\n", qtdTIME);
	printf("Quantidade de jogadores por time: %d\n", qtdJOG);
	
	while(i <= qtdTIME){
		printf("\n# TIME %d:\n", i);
		i++;
		j=1;
		while(j <= qtdJOG){
			printf("J%d", j);
			if(j!=qtdJOG){
				printf(",");
			}else{
				printf(".");
			}
			j++; 
		}
		printf("\n");
	}
	
	return 0;
}
