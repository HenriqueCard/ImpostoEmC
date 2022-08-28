#include <stdlib.h>//
#include<stdio.h>//
#include<string.h>//bibliotecas

int main()//função principal
{
	struct dados_funcionario//estrutura de dados
	{
		char nome[20];//membros da estrutura
		float salario=0;
	};struct dados_funcionario funcionario;//nome que vai fazer referência a estrutura de dados
	
		printf("Nome do funcionario:\n");//solicita ao usuário um nome
		fgets(funcionario.nome, 20, stdin);//faz a leitura e grava no membro da struct
		printf("Salario do funcionario:\n");//solicita ao usuário um valor
		scanf_s("%f", &funcionario.salario);//faz a leitura e grava no membro da struct
		
		while (funcionario.salario > 0) {

			if (funcionario.salario <= 1.637)//condição
			{
				printf("Funcionario isento do imposto!\n");//imprime valor calculado
			}
			else if ((funcionario.salario > 1.637) && (funcionario.salario <= 2.453))//condição
			{
				printf("Valor do imposto de: %s sera :%.2f\n",funcionario.nome, funcionario.salario * (7.5 / 100));//imprime valor calculado
			}
			else if ((funcionario.salario > 2.453) && (funcionario.salario <= 3.271))//condição
			{
				printf("Valor do imposto:%.2f\n", funcionario.salario * (15.0 / 100));//imprime valor calculado
			}
			else if ((funcionario.salario > 3.271) && (funcionario.salario <= 4.087))//condição
			{
				printf("Valor do imposto:%.2f\n", funcionario.salario * (22.5 / 100));//imprime valor calculado
			}
			else if (funcionario.salario > 4.087)//condição
			{
				printf("Valor do imposto:%.2f\n", funcionario.salario * (27.5 / 100));//imprime valor calculado
			}

			printf("Nome do funcionario:\n");//solicita ao usuário um nome
			fgets(funcionario.nome, 20, stdin);//faz a leitura e grava no membro da struct
			printf("Salario do funcionario:\n");//solicita ao usuário um valor
			scanf_s("%f", &funcionario.salario);//faz a leitura e grava no membro da struct

		}
			
	
	system("pause");//pausa a tela
	return 0;
}