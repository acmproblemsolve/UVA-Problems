#include<stdio.h>
int main()
{
    int f0,f1,n,i;
   long long f2;
    scanf("%d",&n);

        f0=0;
        f1=1;
    for(i=1;i<=n;i++)
    {
        f2=f0+f1;
        f1=f0;
        f0=f2;
    }
      printf("The Fibonaci number for %d is %lld\n",n,f2);

    return 0;
}

