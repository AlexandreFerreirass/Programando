// Aula1710_condicionais.cpp : Defines the entry point for the console application.
//

//operadores lógicos 
// == igual / != diferente /< menor / > maior / <= menor igual / >= maior igual
//conectores lógicos 
// e - &&
// ou - ||
//else - senao / para todo else tem que ter um if mas para todo if nao precisa de um else

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a = 5;
// o resultado da expressao eh true sempre vai 
	if (true)
	{
		printf("Essa frase sempre sera impressa");
	}

	if (false)
	{
		printf("Essa frase nunca sera impressa\n");
	}
	if (a == 3)
	{
		printf("A e igual a 3\n");
	}
	if (a != 3)
	{
		printf("A e diferente de 3\n");
	}
	if (a <= 5)
	{
		printf("A e menor ou igual a 5\n");
	}
	if (a < 5) //(-1000,0,1,2,3,4)
	{

	}
	if ((a != 5) && ((a % 5 == 0) && (a % 7 == 0)))
	{

	}
	system("pause");
    return 0;
}

