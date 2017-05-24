#include<stdio.h>
int main()
{
    int s, k, a, b;
    while(scanf("%d", &s)==1)
    {
        k = sqrt(2*s);
        a = s - (k*k + k)/2;
        if(a<1)
        {
            k--;//k=k-1;
            a = s - (k*k + k)/2;
        }
        b = k + 2 - a;

        if(k%2 == 0)
        {
            a ^= b ^= a ^= b;//a=b;b=c;c=a
        }
        printf("TERM %d IS %d/%d\n", s, a, b);
    }
    return 0;
}
