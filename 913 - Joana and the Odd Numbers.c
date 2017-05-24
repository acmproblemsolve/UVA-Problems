#include<stdio.h>
int main()
{
    /*r=((n+1)/2)^2
    h=a+(r-1)d
    3*h-6
    */
    long long n,sum;
   while (scanf("%lld",&n)==1)
   {
       /*a=(n+1)/2;
       b=a*a;
       r=1+(b-1)*2;
       sum=r*3-6;*/

   sum=((n*(n+2))/2)*3-6;
     printf("%lld\n",sum);
   }
return 0;
}
