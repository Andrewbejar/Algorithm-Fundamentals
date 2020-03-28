#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

float prod_vecx (float y1, float z1, float y2, float z2, float x3)
    {
      x3 = y1*z2-z1*y2;
    return x3;
    }

float prod_vecy (float x1, float z1, float x2, float z2, float y3)
    {
      y3 = x1*z2-z1*x2;
    return y3;
    }

float prod_vecz (float x1, float y1, float x2, float y2, float z3)
    {
      z3 = x1*y2-y1*x2;
    return z3;
    }


int main (int argc, char** argv){

  float x1 = atof(argv[1]);
  float x2 = atof(argv[2]);
  float y1 = atof(argv[3]);
  float y2 = atof(argv[4]);
  float z1 = atof(argv[5]);
  float z2 = atof(argv[6]);

  float x3;
  float y3;
  float z3;

  printf("x1 is %.3f\n",x1);
  printf("x2 is %.3f\n",y1);
  printf("y1 is %.3f\n",z1);
  printf("y2 is %.3f\n",x2);
  printf("z1 is %.3f\n",y2);
  printf("z2 is %.3f\n",z2);

  prod_vecx (y1,z1,y2,z2,x3);

  prod_vecy (x1,z1,x2,z2,y3);

  prod_vecz (x1,y1,x2,y2,z3);

  printf("The cross product is: %.3fx, %.3fy, %.3fz\n", prod_vecx(y1, z1, y2, z2, x3),prod_vecy(x1, z1, x2, z2, y3), prod_vecz(x1, y1, x2, y2, z3));

return 0;
}
