// Aula1010_Funcoes.cpp : Defines the entry point for the console application.
//Set as StartUp Project---> definir o projeto a ser executado
//F5 executa o debug
//F9 break points  - executa e para na linha definida
//F10 executa sem mostrar (passo-a-passo)
//F11 executa (passo-a-passo)
// valores truncados 

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>

void HelloWord()// void-->Função não possui retorno
{
	printf("Hello World!\n");
}



int somade2valores(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

int main()
{
	HelloWord(); //Telecense autocomplete--> funções são identificadas por um cubo 
	int d=somade2valores(10, 10);
	printf("Digite os dois valores: %i\n");
	

	printf("\Resultado da soma: %i\n", d);
	system("pause");
	return 0;
		
}

