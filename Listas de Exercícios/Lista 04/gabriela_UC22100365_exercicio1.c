#include <stdio.h>
#include <stdlib.h>

/*
Desenvolva um algoritmo que solicitará a uma única pessoa a quantidade de metros cúbicos (m3) que ela
consome por mês e identificará a sua categoria de consumo, respeitando as definições a seguir:
	
	Menor ou igual a 2,1 m3 BAIXO
	Maior que 2,1 m3 e menor ou igual a 6,1 m3 NORMAL
	Maior que 6,1 m3 e menor ou igual a 10,5 m3 ALTO
	Maior que 10,5 m3 EXAGERADO                                                    
	
	- Solicite ainda o mês e o ano em seu algoritmo para colaborar com esta pesquisa, 
	validando o mês informado entre 1 para Janeiro, podendo chegar a 12 para Dezembro. 
	- O valor de consumo em m3 também deve ser validado, podendo ser 0 (zero), sem 
	consumo algum, mas nunca um valor negativo.                                        
	- Os pesquisadores afirmam que nos anos bissextos o consumo é maior. Por isso 
	seu algoritmo também deverá apresentar se o ano desta análise é bissexto. O ano 
	bissexto precisa ser múltiplo de 4 e não múltiplo de 100 ou ainda ser múltiplo de 400.
	- Mostre, como resultado final, o consumo informado pela pessoa, a sua classificação 
	por extenso (conforme tabela acima), o mês e ano da pesquisa, além de indicar se o ano 
	informado é ou não bissexto.
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
	
	if(mes == 1){
		printf("Dados mensais coletados do periodo de Janeiro/%d.\n", ano);
	}else{
		if(mes == 2){
			printf("Dados mensais coletados do periodo de Fevereiro/%d.\n", ano);
		}else{
			if(mes == 3){
				printf("Dados mensais coletados do periodo de Marco/%d.\n", ano);
			}else{
				if(mes == 4){
					printf("Dados mensais coletados do periodo de Abril/%d.\n", ano);
				}else{
					if(mes == 5){
						printf("Dados mensais coletados do periodo de Maio/%d.\n", ano);
					}else{
						if(mes == 6){
							printf("Dados mensais coletados do periodo de Junho/%d.\n", ano);
						}else{
							if(mes == 7){
								printf("Dados mensais coletados do periodo de Julho/%d.\n", ano);
							}else{
								if(mes == 8){
									printf("Dados mensais coletados do periodo de Agosto/%d.\n", ano);
								}else{
									if(mes == 9){
										printf("Dados mensais coletados do periodo de Setembro/%d.\n", ano);
									}else{
										if(mes == 10){
											printf("Dados mensais coletados do periodo de Outubro/%d.\n", ano);
										}else{
											if(mes == 11){
												printf("Dados mensais coletados do periodo de Novembro/%d.\n", ano);
											}else{
												if(mes == 12){
													printf("Dados mensais coletados do periodo de Dezembro/%d.\n", ano);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	
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
