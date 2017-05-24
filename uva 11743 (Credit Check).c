#include <stdio.h>
int main()
{
    int credit[20],mult[20],test,i,j,k,l,list,sum;
    freopen("in11743.txt","r",stdin);
    scanf("%d",&test);
    for(i=0;i<test;i++){
      for(j=0;j<16;j++)scanf("%1d",&credit[j]);
      l=0;
      sum=0;
      for(k=0;k<16;k=k+2){
        if(2*credit[k]>=10)list=(2*credit[k]%10)+(2*credit[k]/10);
        else list=2*credit[k];

        sum+=list;
      }
      for(k=1;k<16;k=k+2)sum+=credit[k];
      if(sum%10)printf("Invalid\n");
      else if(sum%10==0)printf("Valid\n");

    }




    return 0;
}
