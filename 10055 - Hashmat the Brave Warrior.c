#include <stdio.h>
int main()
{
    long long h,e;
    while(scanf("%lld %lld",&h,&e)==2)
        {
        if(h<e)
            printf("%lld\n",e-h);
        else
         printf("%lld\n",h-e);
        }
    return 0;
}
