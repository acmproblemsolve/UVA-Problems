#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long a,b,c,t,i;
  scanf("%lld",&t);
  for(i=1;i<=t;i++){
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a+b<=c)
        printf("Case %lld: Invalid\n",i);
        else if(b+c<=a)
        printf("Case %lld: Invalid\n",i);
        else if(c+a<=b)
        printf("Case %lld: Invalid\n",i);
       else
       {
           if((a==b)&&(b==c)&&(a==c))
            printf("Case %lld: Equilateral\n",i);
           else if ((a==b)||(a==c)||(b==c))
            printf("Case %lld: Isosceles\n",i);
           else
            printf("Case %lld: Scalene\n",i);
       }

  }
    return 0;
}
