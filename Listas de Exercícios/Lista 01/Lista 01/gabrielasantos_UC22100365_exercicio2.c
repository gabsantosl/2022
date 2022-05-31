#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
Elabore um programa que receba os mesmo dados que o formulário apresentado na lista e apresente na tela ao final, 
aproximando-se ao máximo do "layout" original, desconsidere as máscaras de valores como os pontos no CPF por exemplo.
*/

int main() {
	
	int tipoCA=0, resp=0, quantCAR=0;
	char nomePJ[35], nomePF[35], endereco[35], numero[5],comple[20], bairro[20], estado[2], cidade[35], cep[8],
	dddFIXO[3], telFIXO[8], dddCEL[3], telCEL[9], cpf[11], cnpj[14], inscSTD[13], inscMNCP[9], dataNASC[8],
	cnae[8], contEMP[20], telEMP[8], email[50], dataHOJE[8], visto[35], placaC1[7], modeloC1[15], anoC1[4], corC1[20],
	placaC2[7], modeloC2[15], anoC2[4], corC2[20], placaC3[7], modeloC3[15], anoC3[4], corC3[20];
	
	printf("==== DADOS DO CREDENCIADO ====");
	
	printf("\n\nVoce possui cadastro de Pessoa Juridica? ");
	printf("\nSIM: 1");
	printf("\nNAO: 2");
	printf("\n\nR: ");
	scanf("%d", &tipoCA);
	
	if(tipoCA==1){
		printf("\nInforme a Razao Social da sua empresa: ");
		scanf(" %[^\n]s", &nomePJ);
		printf("Informe o seu Nome Completo: ");
		scanf(" %[^\n]s", &nomePF);
	}else{
		printf("\nInforme o seu Nome Completo: ");
		scanf(" %[^\n]s", &nomePF);
	}
	
	printf("\n=== ENDERECO === \n");
	
	printf("\nInforme o seu Endereco: ");
	scanf(" %[^\n]s", &endereco);
	printf("Informe o Numero do Endereco: ");
	scanf("%s", &numero);
	printf("Informe o Complemento do Endereco: ");
	scanf(" %[^\n]s", &comple);
	printf("Informe o Bairro do Endereco: ");
	scanf(" %[^\n]s", &bairro);
	printf("Informe o CEP do Endereco: ");
	scanf("%s", &cep);
	printf("Informe o a sigla do estado: ");
	scanf(" %s", &estado);
	printf("Informe a Cidade: ");
	scanf(" %[^\n]s", &cidade);
	
	printf("\n=== CONTATOS === \n");
	
	printf("\nInforme o DDD do Telefone: ");
	scanf(" %s", &dddFIXO);
	if(tipoCA==1){
		printf("Informe o Telefone Comercial: ");
		scanf(" %s", &telFIXO);
	}else{
		printf("Informe o Telefone Residencial: ");
		scanf(" %s", &telFIXO);
	}
	
	printf("\nInforme o DDD do Celular: ");
	scanf(" %s", &dddCEL);
	printf("Informe o Telefone Celular: ");
	scanf(" %s", &telCEL);
	
	system("cls");
	
	printf("\n==== OUTROS DADOS ====\n");
	
	printf("\nInforme o seu CPF: ");
	scanf(" %s", &cpf);
	if(tipoCA==1){
		printf("\nInforme o CNPJ da empresa: ");
		scanf(" %s", &cnpj);
		printf("Informe a Inscricao Estadual da empresa: ");
		scanf(" %s", &inscSTD);
		printf("Informe a Inscricao Municipal da empresa: ");
		scanf(" %s", &inscMNCP);
		printf("Informe a CNAE da empresa: ");
		scanf(" %s", &cnae);
	}
	
	printf("\nInforme a sua data de nascimento (DD/MM/AAAA): ");
	scanf(" %s", &dataNASC);
	
	printf("\nDeseja receber os proximos boletos por e-mail?");
	printf("\nSIM: 1");
	printf("       NAO: 2");
	printf("\nR: ");
	scanf(" %d", &resp);
	
	printf("\nInforme um e-mail para contato: ");
	scanf("%s", &email);
	if(tipoCA==1){
		printf("\nInforme o contato do Responsavel da empresa: ");
		scanf(" %s", &contEMP);
		printf("Informe o Telefone Comercial: ");
		scanf(" %s", &telEMP);
	}
	
	printf("\nInforme a data de hoje (DD/MM/AAAA): ");
	scanf("%s", &dataHOJE);
	printf("Deixe o seu visto para o cadastro: ");
	scanf(" %[^\n]s", &visto);
	
	system("cls");
	
	printf("==== DADOS DOS VEICULOS ====\n");
	
	printf("\nQuantos sao os veiculos cadastrados? (MAXIMO DE 3 CADASTROS)");
	printf("\nR: ");
	scanf("%d", &quantCAR);
	
	printf("\n\nDigite a placa do primeiro carro: ");
	scanf(" %[^\n]s", &placaC1);
	printf("Digite o modelo: ");
	scanf(" %[^\n]s", &modeloC1);
	printf("Digite o ano de compra: ");
	scanf(" %[^\n]s", &anoC1);
	printf("Digite a cor: ");
	scanf(" %[^\n]s", &corC1);
	
	if(quantCAR==2){
		printf("\nDigite a placa do segundo carro: ");
		scanf(" %[^\n]s", &placaC2);
		printf("Digite o modelo: ");
		scanf(" %[^\n]s", &modeloC2);
		printf("Digite o ano de compra: ");
		scanf(" %[^\n]s", &anoC2);
		printf("Digite a cor: ");
		scanf(" %[^\n]s", &corC2);
	}else{
		if(quantCAR==3){
		printf("\nDigite a placa do segundo carro: ");
		scanf(" %[^\n]s", &placaC2);
		printf("Digite o modelo: ");
		scanf(" %[^\n]s", &modeloC2);
		printf("Digite o ano de compra: ");
		scanf(" %[^\n]s", &anoC2);
		printf("Digite a cor: ");
		scanf(" %[^\n]s", &corC2);
		printf("\nDigite a placa do terceiro carro: ");
		scanf(" %[^\n]s", &placaC3);
		printf("Digite o modelo: ");
		scanf(" %[^\n]s", &modeloC3);
		printf("Digite o ano de compra: ");
		scanf(" %[^\n]s", &anoC3);
		printf("Digite a cor: ");
		scanf(" %[^\n]s", &corC3);
		}	
	}
	
	system("cls");
	
	printf("\n==== DADOS DO CREDENCIADO ====\n");
		
	if(tipoCA==1){
		printf("\nRazao Social: %s", nomePJ);
		printf("\nNome completo: %s\n", nomePF);		
	}else{
		printf("\nRazao Social: -");
		printf("\nNome completo: %s\n", nomePF);
	}
	
	printf("\nEndereco: %s", endereco);
	printf("\nNumero: %s", numero);
	printf("    Complemento: %s", comple);
	printf("    Bairro: %s", bairro);
	printf("\nCEP: %s", cep);
	printf("    Estado: %s", estado);
	printf("    Cidade: %s\n", cidade);
	
	printf("\nDDD: %s", dddFIXO);	
	if(tipoCA==1){
		printf("    Telefone Comercial: %s", telFIXO);		
	}else{
		printf("    Telefone Residencial: %s", telFIXO);
	}
	printf("    DDD: %s", dddCEL);
	printf("    Telefone Celular: %s\n", telCEL);
	
	printf("\nCPF: %s", cpf);
	if(tipoCA==1){
		printf("             CNPJ: %s\n", cnpj);
		printf("Inscricao Estadual: %s", inscSTD);
		printf("             Inscricao Municipal: %s\n", inscMNCP);
		printf("CNAE: %s", cnae);
		printf("         Data de Nascimento: %s", dataNASC);
	}else{
		printf("             CNPJ: -\n");
		printf("Inscricao Estadual: -");
		printf("             Inscricao Municipal: -\n");
		printf("CNAE: -");
		printf("         Data de Nascimento: %s", dataNASC);	
	}
	
	printf("         Deseja receber os proximos boletos via e-mail: ");
		if(resp==1){
		printf("SIM.");
		}else{
			printf("NAO.");
			}
		
	printf("\n\nEmail: %s", email);
	if(tipoCA==1){
		printf("\nContato do Responsavel: %s", contEMP);
		printf("         Telefone Comercial: %s", telEMP);
	}else{
		printf("\nContato do Responsavel: -");
		printf("         Telefone Comercial: -");		
	}
			
	printf("\nData: %s", dataHOJE);
	printf("                           Assinatura do Responsavel: %s", visto);
	
	printf("\n\n==== DADOS DOS VEICULOS ====\n");
	
	printf("\nPlaca: %s", placaC1);
	printf("    Modelo: %s", modeloC1);
	printf("    Ano: %s", anoC1);
	printf("    Cor: %s", corC1);
	
	if(quantCAR==2){
		printf("\nPlaca: %s", placaC2);
		printf("    Modelo: %s", modeloC2);
		printf("    Ano: %s", anoC2);
		printf("    Cor: %s", corC2);
	}else{
		if(quantCAR==3){
		printf("\nPlaca: %s", placaC2);
		printf("    Modelo: %s", modeloC2);
		printf("    Ano: %s", anoC2);
		printf("    Cor: %s", corC2);
		printf("\nPlaca: %s", placaC3);
		printf("    Modelo: %s", modeloC3);
		printf("    Ano: %s", anoC3);
		printf("    Cor: %s", corC3);
		}	
	}
	
	return 0;
	
}
