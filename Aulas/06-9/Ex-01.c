#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Desenvolva um algoritmo que solicitar� a uma �nica pessoa a quantidade de metros c�bicos (m3) que ela
consome por m�s e identificar� a sua categoria de consumo, respeitando as defini��es a seguir:
	
	Menor ou igual a 2,1 m3 BAIXO
	Maior que 2,1 m3 e menor ou igual a 6,1 m3 NORMAL
	Maior que 6,1 m3 e menor ou igual a 10,5 m3 ALTO
	Maior que 10,5 m3 EXAGERADO                                                    FEITO
	
- Solicite ainda o m�s e o ano em seu algoritmo para colaborar com esta pesquisa, 
validando o m�s informado entre 1 para Janeiro, podendo chegar a 12 para Dezembro. FEITO
- O valor de consumo em m3 tamb�m deve ser validado, podendo ser 0 (zero), sem 
consumo algum, mas nunca um valor negativo.                                        FEITO
- Os pesquisadores afirmam que nos anos bissextos o consumo � maior. Por isso 
seu algoritmo tamb�m dever� apresentar se o ano desta an�lise � bissexto. O ano 
bissexto precisa ser m�ltiplo de 4 e n�o m�ltiplo de 100 ou ainda ser m�ltiplo de 400. FEITO

- Mostre, como resultado final, o consumo informado pela pessoa, a sua 
classifica��o por extenso (conforme tabela acima), o m�s e ano da pesquisa, al�m 
de indicar se o ano informado � ou n�o bissexto.
*/

int main() {
	
	int mes = 0, ano = 0, bissexto = 0, consumoCAT = 0;
	float consumo = 0;
	char mesNOME;
	
	printf("=== CONSUMO MENSAL DE AGUA ===\n\n");
	
	while(mes < 1 || mes > 12){
		printf("Informe o mes dos dados que serao inseridos: ");
		scanf("%d", &mes);
		
		if(mes < 1 || mes > 12){
			printf("\nValor invalido. Digite novamente.\n");
		}	
	}
	
	if(mes == 1){
		mesNOME = 'J';
	}else{
		if(mes == 2){
			mesNOME = 'F';
		}else{
			if(mes == 3){
				mesNOME = 'MR';
			}else{
				if(mes == 4){
					mesNOME = 'A';
				}else{
					if(mes == 5){
						mesNOME = 'MA';
					}else{
						if(mes == 6){
							mesNOME = 'JN';
						}else{
							if(mes == 7){
								mesNOME = 'JL';
							}else{
								if(mes == 8){
									mesNOME = 'AG';
								}
							}
						}
					}
				}
			}
		}
	}
	
	printf("Mes %d do ano de: ", mes);
	scanf("%d", &ano);
	
	if(ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0){
		bissexto = 1;
	}else{
		bissexto = 0;
	}
	
	printf("\nInforme o seu consumo no mes de %d/%d em m3: ", mes, ano);
	scanf("%f", &consumo);
	
	while(consumo < 0){
		if(consumo < 0){
			printf("Valor de Consumo Invalido.\n");
			
			printf("\nInforme o seu consumo no mes de %d/%d em m3: ", mes, ano);
			scanf("%f", &consumo);
		}
	}
	
	if(consumo == 0){
		consumoCAT = 0;
	}else{
		if(consumo <= 2.1){
			consumoCAT = 1;
		}else{
			if(consumo > 2.1 && consumo <= 6.1){
				consumoCAT = 2;
			}else{
				if(consumo > 6.1 && consumo <= 10.5){
					consumoCAT = 3;
				}else{
					if(consumo > 10.5){
						consumoCAT = 4;
					}
				}	
			}
		}	
	}
	
	system("cls");

	printf("=== CONSUMO MENSAL DE AGUA ===\n\n");
	
	printf("Dados mensais coletados do periodo de %c/%d.\n", mesNOME, ano);
	
	if(bissexto == 1){
		printf("Presenca de ano Bissexto: POSITIVO.\n", ano);
	}else{
		printf("Presenca de ano Bissexto: NEGATIVO.\n", ano);
	}
	
	printf("\nConsumo Informado: %.2f m3.\n", consumo);
	if(consumoCAT == 0){
		printf("O consumo foi NULO.");
	}else{
		if(consumoCAT == 1){
			printf("O consumo foi BAIXO.");
		}else{
			if(consumoCAT == 2){
				printf("O consumo foi NORMAL.");
			}else{
				if(consumoCAT == 3){
					printf("O consumo foi ALTO.");
				}else{
					if(consumoCAT == 4){
						printf("O consumo foi EXAGERADO.");
					}
				}	
			}
		}	
	}
	
	return 0;
}
