#include<stdio.h>
int main()
{
int n,a;
while(scanf("%d",&n)==1)
{
if(n==0)
    break;
 int i,  x=0,y=1,a=0;

for(i=1;i<=n;i++)
{
a=x+y;
x=y;
y=a;
}
printf("%d\n",a);
}
return 0;
}
