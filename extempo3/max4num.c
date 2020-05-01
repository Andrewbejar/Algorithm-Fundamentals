#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int max;
    if(a<b)
    {
        max=b;
        if(b<c)
        {
            max=c;
            if(c<d)
            {
                max=d;
            }
        }
        else if(b<d)
        {
            max=d;
            if(d<c)
            {
                max=c;
            }
        }
    }
    else if(a<c)
    {
        max=c;
        if(c<b)
        {
            max=b;
            if(b<d)
            {
                max=d;
            }
        }
        else if(c<d)
        {
            max=d;
            if(d<b)
            {
                max=b;
            }
        }
    }
    else if(a<d)
    {
        max=d;
        if(d<b)
        {
            max=b;
            if(b<c)
            {
                max=c;
            }
        }
        else if(d<c)
        {
            max=c;
            if(c<b)
            {
                max=b;
            }
        }
    }
    else {
        max=a;
        if (a<c)
        {
            max=c;
            if(c<d)
            {
                max=d;
            }
        }
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
