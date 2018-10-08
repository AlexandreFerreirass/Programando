// Aula0810.cpp : Defines the entry point for the console application.
//

/*Incluir comentario com 
mais de uma linha 
*/

#include "stdafx.h"
//C ANSI
#include <stdio.h> //Stander I/O biblicoteca padrão de entrada e saída de dados (perifericos)
#include <stdlib.h>

//variaveis

int a;    //inteiro
float b;  //flutuante
double c; // flutuante (maior precisão, mais casas decimais)
bool d;   //booleano (verdadeiro/falso-->true/falso)

//Ctrl+shift+b compilar sem executar - verificar a sintaxe

int main()
{

	int e; //variavel local, visivel somente nesta função, a partir dessa linha

	printf("Hello Word!\n"); //\ caracter de escape, todo comentario que estiver apos a \ não sera printado - "n" comando para pular uma linha - "t" tab 


	printf("1\t\t2\t\t3\n");
	printf("1\t\t2\t\t3\n");
	printf("1\t\t2\t\t3\n");

	printf("\n");

	//como imprimir valores
	printf("%i\n", 99);
	printf("%f\n", 100.99);

	//texto (string) e valores juntos
	printf("Valor %i, total da soma.\n", 98 + 5); //%i valor inteiro 

	printf("%i + %i = %i\n", 500, 600, 500 + 600);

	a = 150;
	e = 200;

	int f = a + e;

	printf("O resultado da soma é: %i\n", f);

	//leitura SCANF / SCAN_S
	scanf_s("%i", &f);

	//erros comuns esquecer de identificar o tipo da variavel ou identificar errado
	printf("\nVoce digitou: %i\n", f);

	printf("\nDigite um valor real: ", b);

	scanf_s("%f", &b);


		
		
	system("pause");
	



	
    return 0;
}

