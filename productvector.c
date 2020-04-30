#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
	int i, j, x, y=0, z, square, sum, productopunto;
	float magnitud;

	if(argc == 3)
	{
		for(i=1; i<=argc; i++) //magnitud de un vector de 3 numeros
		{
			x = atoi(argv[i]);
			square = x*x;
			sum = y+x;
			y = x;
		}

		magnitud = sqrt(sum);
	}
	else if(argc == 6)
	{
		for(i=1; i<argc/2; i++)
		{
			for(j=argc; j>=6; i--)
			{
				x = atoi(argv[i]);
				y = atoi(argv[j]);

			productopunto = x*y;
			sum = productopunto + z;
			z = productopunto;
			}
		}

	}
	else
	{
		printf("numero de entradas es invalido\n");
	}

	if(argc == 3)
	{
	printf("%f\n", magnitud);
	}

	if(argc == 6)
	{
		printf("productopunto = %d\n",sum);
		// printf("producto cruz = %d\n");
	}

	return 0;

}
