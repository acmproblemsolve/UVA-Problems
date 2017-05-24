#include <stdio.h>
int main()
{
    int m,n,res;
    while(scanf("%d %d",&m,&n)==2){

            if(m==0||n==0){
            break;}
         if(m==1||n==1)
         {
             res=m*n;
         }
        else if(m==2||n==2)
             {
                 res=m*n/8*4;

                 if((m*n)%8==2)
                    res=res+2;
                 if((m*n)%8==6||(m*n)%8==4)
                  res=res+4;
             }
             else if(m%2!=0&&n%2!=0)
             {
                 res=((m*n)/2+1);
             }
             else
             {
                res=(m*n)/2;
             }



             printf("%d knights may be placed on a %d row %d column board.\n",res,m,n);
    }
    return 0;
}
