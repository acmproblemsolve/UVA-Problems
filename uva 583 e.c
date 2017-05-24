#include<stdio.h>
int main()
{
    long long number,i,temp;
    while(scanf("%lld",&number)){

if(number==0) break;
       if(number<0)
       {
         printf("%lld = -1 x ",number);
         number=number*-1;
       }
       else
       {
         printf("%lld = ",number);
       }
       for(i=2;i*i<=number;i++)
       {
         if(number%i==0)
         {
            printf("%lld x ",i);
            number=number/i;
            temp=i;
            i=1;
         }
       }
       printf("%lld\n",number);
    }

    return 0;
}
