#include <stdio.h>
#include <math.h>
#include <stdlib.h>

static char* primes;
void cachePrimes(int n)
{
    int i,j,k;
    primes = (char*) malloc((n+1)*sizeof(char));
    for(i = 0;i<=n;i++)
        primes[i] = 0;
    primes[0]=1;
    primes[1] = 1;
    k = sqrt(n);
    for(i = 2;i<=k;i++)
        if(!primes[i])
            for(j=i*i;j<=n;j+=i)
                primes[j] = 1;
}
int main()
{
    int n,max,i;
    cachePrimes(1000000);
    scanf("%d",&n);
    while(n!=0)
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
