
#include<stdio.h>
int main()
{
int a,b,c,d,res,j;
while(scanf("%d",&d)==1)
{
for(j=1;j<=d;j++)
{
scanf("%d%d%d",&a,&b,&c);
if(a>b && b>c || a<b && b<c)
res=b;
if(a>c && c>b || a<c && c<b)
res=c;
if(b>a && a>c || b<a && a<c)
res=a;
printf("Case %d: %d\n",j,res);
}
}
return 0;
}
