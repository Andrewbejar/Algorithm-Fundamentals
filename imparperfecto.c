#include <stdio.h>
#include <stdlib.h>


int main(int arc, char** argv)
{
	int i, j, ni, nf, numero, multiplo, suma;

	ni = atoi(argv[1]);
	nf = atoi(argv[2]);

	numero = nf-ni;
	printf("nf = %d ni = %d numero = %d\n", nf, ni, numero);

	for(i=ni; i<=nf; i++)
	{

		for(j=1; j<=i; j++)
		{

			multiplo = j%i;

			if(multiplo == 0)
			{
				suma = suma + j;
			}

		}

		if(suma == i)
		{
			printf("%d perfecto\n", i);
		}

		if(i%2 != 0)
		{
			printf("%d impar\n", i);
		}

	}

}
