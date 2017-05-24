#include<stdio.h>
int main()
{
    int sum,dis,i,t,res1,res2;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&sum,&dis);
        if(sum>=dis&&(sum+dis)%2==0)
        {
            res1=(sum+dis)/2;
            res2=sum-res1;
            printf("%d %d\n",res1,res2);
        }
        else
            printf("impossible\n");

    }
    return 0;
}
