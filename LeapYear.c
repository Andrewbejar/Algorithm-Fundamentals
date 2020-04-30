#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i;

	for(i=1500;i<=2100;i++)
	{
		if(i%4==0 && i%100!=0 || i%400==0)
		{
			printf("%d is a leap year\n",i);
		}
		else
		{
			printf("%d is not a leap year\n",i);
		}
	}
	return 0;
}
