#include <stdio.h>
#include <stdlib.h>

int main()
{
	int no, num, numb, number, digits, x, y, i, j,  count, zerodigits;

	printf("Enter in your number\n");
	scanf("%d", &no);

	if(no%10 == no || no == 0) //para un digito
	{
		printf("%d es numero capicua\n", no);
	}
	else
	{
			number = no;
                        digits = 0;

                        while(no != 0)
                        {
                                no = no/10;
                                digits++;
                        }

		if(digits/2 == 1 && number/10 == number%10) //para saber si tiene unicamente dos digitos que tienen mismos digitos
		{
			printf("%d es numero capicua\n",number);
		}
		else
		{

			if(digits == 2)
			{
				printf("%d no es numero capicua\n",number);
				exit(0);
			}

			if(digits%2 == 0 && number%11 == 0) //numero par
			{
				printf("%d es numerooooo capicua\n", number);
			}
			else
			{
				num = number;
				numb = num;
				zerodigits = 1;

				while(number != 0) //para identificar cuantos ceros despues del uno se le debera dividir al numero para halle el primer digito
				{
					number = number/10;
					zerodigits = zerodigits*10;
				}
				zerodigits = zerodigits/10;
				printf("zerodigits = %d\n",zerodigits);
				count = 10;
				printf("count = %d\n",count);
				number = num;
				j = digits/2;			//(2*digits)-digits-2;
				printf("j = %d\n",j);

				for(i=1; i<=j; i++)
				{

					number = number%count; // para identificar el ultimo digito mas los que van a la izquierda
					num = num/zerodigits; //para identificar el primer digito mas los que van a la derecha

					printf("number = %d and num = %d\n", number, num);

					if(number != num)
					{
						printf("%d no es nummmmmmero capicua\n",numb);
						exit(0);
					}
					zerodigits = zerodigits/10;
					printf("zerodigits = %d\n", zerodigits);
					count=count*10;
					printf("count = %d\n",count);
					number = number/10;
				}
				printf("%d es numeeeeeero capicua\n",numb);
			}
		}
	}
	return 0;
}
