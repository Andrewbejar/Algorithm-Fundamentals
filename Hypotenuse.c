#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	float op,adj,sum,total;

	scanf("%f",&op);
	scanf("%f",&adj);

	sum=op*op+adj*adj;
	total=sqrt(sum);

	printf("the hypotenuse is: %f\n",total);

	return 0;
}
