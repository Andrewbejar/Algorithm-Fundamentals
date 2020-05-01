#include <stdio.h>

/*void update(int *a,int *b) {
    long int posneg, x;
    x=*a;
    *a=(*a)+(*b);
    posneg=(x)-(*b);
    if(posneg<0)
    {
        *b=posneg*(-1);
    }
    else
    {
        *b=posneg;
    }
*/

if(A > B && A > C && A > D){
            X=A;
        }else{
            if(B > A && B > C && B > D){
                X=B;
            }else{
                if(C > A && C > B && C > D){
                    X=C;
                }else
                    X=D;
            }
        }

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}



