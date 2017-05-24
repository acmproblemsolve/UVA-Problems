#include<stdio.h>
int main()
{
    int N,a[1005],i,k,temp,p,S,j,L;
    scanf("%d",&N);
    for(j=1;j<=N;j++)
    {
    scanf("%d",&L);
    for(i=0;i<L;i++)
    {
        scanf("%d",&a[i]);
    }
    S=0;
    for(p=0;p<L;p++)
    {
    for(k=p+1;k<L;k++)
    {
      if(a[p]>a[k])
      {
          S++;
      }
    }
    }
    printf("Optimal train swapping takes %d swaps.\n",S);
   }
return 0;
}
