// Aula1010calculadora.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
//#include<locale.h>




float soma(float a, float b)
{
	float cs = a + b;
	return cs;
}

float multiplicacao(float a, float b)
{
	float cm = a * b;
	return cm;
}

float divisao(float a, float b)
{
	float cd = a / b;
	return cd;
}
float subtracao(float a, float b)
{
	float cs = a - b;
	return cs;
}


int main()
{
	//setlocale(LC_ALL, "portuguese");
	float a, b;

	printf_s("Digite o primeiro valor: ");
	scanf_s("%f", &a);
	printf_s("Digite o segundo valor: ");
	scanf_s("%f", &b);
		
	printf_s("O valor da soma �: %f\n", soma(a,b));
	printf_s("O valor da multiplica��o �: %f\n", multiplicacao(a, b));
	printf_s("O valor da divis�o �: %f\n", divisao(a, b));
	printf_s("O valor da subtra��o �: %f\n", subtracao(a, b));

	system("pause");
}

