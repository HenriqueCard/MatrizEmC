#include<stdio.h>
#include<string.h>
#include<stdlib.h>//bibliotecas
#define TAM 10//Aloca��o de mem�ria
int main() {//fun��o principal
	int i,j, m, n,c;
	char nomes[TAM][TAM];//declara��o das vari�veis
	
	printf("Qual o tamnho da matriz:\n");//impress�o na tela
	printf("Quantidade de linhas:\n");//impress�o na tela
	scanf_s("%d", &m);//armazenamento de valor na vari�vel
	
	while ((m < 1) || (m > TAM))//condi��o
	{
		printf("Quantidade de linhas:\n");//impress�o na tela
		scanf_s("%d", &m);//armazenamento de valor na vari�vel
		
	}
	printf("Quantidade de colunas:\n");//impress�o na tela
	scanf_s("%d", &n);//armazenamento de valor na vari�vel
	while ((n < 1) || (n > TAM))//condi��o
	{
		printf("Quantidade de colunas:\n");//impress�o na tela
		scanf_s("%d", &n);//armazenamento de valor na vari�vel
		
	}
	
	for (i=0;i<m;i++)//inicializa��o,condi��o e incremento
	{
		for (j = 0;j < n;j++)//inicializa��o,condi��o e incremento
		{
			printf("Digite uma letra:nomes[%d][%d]:", i, j);//captura dados para a matriz
			scanf_s("%c", &nomes[i][j]);//armazenamento de dados na matriz
			while ((c = getchar()) != '\n' && c != EOF) {} //Usado para limpar lixo do teclado
		}
	}
	for (i = 0;i < m;i++)//inicializa��o,condi��o e incremento
	{
		for (j = 0;j < m;j++)//inicializa��o,condi��o e incremento
		{
			printf("%c", nomes[i][j]);//impress�o da matriz
			

		}
		printf("\n");//linha de espa�o
	
	}
	
	


	system("pause");//pausa na tela
	return 0;//retorno
}
