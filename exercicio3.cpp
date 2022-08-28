#include<stdio.h>
#include<string.h>
#include<stdlib.h>//bibliotecas
#define TAM 10//Alocação de memória
int main() {//função principal
	int i,j, m, n,c;
	char nomes[TAM][TAM];//declaração das variáveis
	
	printf("Qual o tamnho da matriz:\n");//impressão na tela
	printf("Quantidade de linhas:\n");//impressão na tela
	scanf_s("%d", &m);//armazenamento de valor na variável
	
	while ((m < 1) || (m > TAM))//condição
	{
		printf("Quantidade de linhas:\n");//impressão na tela
		scanf_s("%d", &m);//armazenamento de valor na variável
		
	}
	printf("Quantidade de colunas:\n");//impressão na tela
	scanf_s("%d", &n);//armazenamento de valor na variável
	while ((n < 1) || (n > TAM))//condição
	{
		printf("Quantidade de colunas:\n");//impressão na tela
		scanf_s("%d", &n);//armazenamento de valor na variável
		
	}
	
	for (i=0;i<m;i++)//inicialização,condição e incremento
	{
		for (j = 0;j < n;j++)//inicialização,condição e incremento
		{
			printf("Digite uma letra:nomes[%d][%d]:", i, j);//captura dados para a matriz
			scanf_s("%c", &nomes[i][j]);//armazenamento de dados na matriz
			while ((c = getchar()) != '\n' && c != EOF) {} //Usado para limpar lixo do teclado
		}
	}
	for (i = 0;i < m;i++)//inicialização,condição e incremento
	{
		for (j = 0;j < m;j++)//inicialização,condição e incremento
		{
			printf("%c", nomes[i][j]);//impressão da matriz
			

		}
		printf("\n");//linha de espaço
	
	}
	
	


	system("pause");//pausa na tela
	return 0;//retorno
}
