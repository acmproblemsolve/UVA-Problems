#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int prime(int a)
{
   int n, i = 3, count, c,p[1000];
   n = 100;
   for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
          int j=1;
        p[0]=2;
         p[j]=i;
         count++;
         j++;
      }
      i++;
   }

}

int main()
{
    int n,max,i;
    cachePrimes(1000000);

    while(scanf("%d",&n)==1&&n!=0)
    {
        max = 0;
        for(i = 2;i<=n/2;i++)
            if(!primes[i]&&!primes[n-i]&&((n-2*i)>(n-2*max)||max==0))
                max = i;
        if(max==0)
            printf("%d:\nNO WAY!\n",n);
        else
            printf("%d:\n%d+%d\n",n,max,n-max);
        scanf("%d",&n);
    }
    return 0;
}
