#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int numero, i, j, divisores;

	numero=atoi(argv[1]);

	for(i=1; i<=numero; i++) //numeros del 1 a numeros
	{
		divisores = 0;

		for(j=1; j<=i; j++) ////numeros del 1 a i
		{
			if(i%j == 0)
			{
				divisores++;
			}
		}

		if(divisores == 2)
		{
			if(numero%i == 0)
			{
				printf("%d ", i);
			}
		}
	}

	printf("\n");

	return 0;
}
