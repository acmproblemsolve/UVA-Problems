#include <cstdio>
#include <cmath>
#include <cstdlib>

int main()
{
    int test,cases,i,number,base,num_digits;
    double fact[1000010];
    for(i=1;i<= 1000000;i++)
        {
            fact[i] = log((i)) + fact[i-1] ;
        }

    scanf("%lld",&test);
    for(cases = 1; cases <= test; cases++)
    {
        scanf("%d %d",&number,&base);
        num_digits = (fact[number]/log((base))+1);

        printf("Case %d: %d\n",cases,num_digits);
    }

    return 0;
}
