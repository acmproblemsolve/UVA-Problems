#include<cstdio>
#include<cmath>
#include<algorithm>


using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        printf("%d = ",n);
        if(n<0)
        {
            printf("-1 x ");
            n=-1*n;
        }
        int l= sqrt(n);
        for(int i=2;i<=l;i=i++)
        {
            while(n%i==0)
            {
               printf("%d",i);
               n=n/i;
               if(n>1)
                printf(" x ");
            }
        }
        if(n>1)
        printf("%d",n);
        printf("\n");

    }

    return 0;
}
