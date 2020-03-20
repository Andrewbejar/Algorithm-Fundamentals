#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i=1;

	for(i=1;i<=200;i++)
	{
		if(i%15==0)
		{
			printf("fizzbuzz\n");
		}
		else
		{
			if(i%5==0)
			{
				printf("buzz\n");
			}
			else
			{
				if(i%3==0)
				{
					printf("fizz\n");
				}
				else
				{
					printf("%d\n",i);
				}
			}
		}
	}
	return 0;
}
