#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc,char** argv)
{
	float op,adj,hyp;

	op=atof(argv[1]);
	adj=atof(argv[2]);

	hyp=sqrt(op*op+adj*adj);

	printf("the hypotenuse is: %f\n",hyp);
}
