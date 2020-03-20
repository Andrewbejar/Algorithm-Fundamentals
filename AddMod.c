#include <stdlib.h>
#include <stdio.h>

int main(int argc,char** argv)
{
	int x,y;

	x=atoi(argv[1]);
	y=atoi(argv[2]);

	printf("%d + %d = %d\n",x,y,x+y);
}
