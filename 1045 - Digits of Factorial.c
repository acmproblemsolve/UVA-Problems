#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdilb>

int main()
{
    long long test,cases,number,base,l[1000001],i;
    scanf("%lld",&test);
    for(cases = 1; cases <= test; cases++)
    {
        scanf("%lld %lld",&number,&base);
        l[0] = 0;
        for(i = 1; i <= 1000001; i++)
        {
            l[i] = l[i-1] + log(i);
        }

        log(base) = log(l[i]) / log (base);
    }
}
