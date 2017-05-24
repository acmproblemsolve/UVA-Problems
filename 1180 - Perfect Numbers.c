#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int t,p,n,i;
    long long int num,sum,j;
    while(scanf("%d",&t)==1)
    {
        for(i=0;i<t;i++)
        {
            scanf("%d",&p);

            sum=0;
            num=pow(2,(p-1))*(pow(2,p)-1);
            for(j=1;j<num;j++)
            {
                if(num%j==0)
                {
                    sum=sum+j;
                }
            }
            if(sum==num)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}
