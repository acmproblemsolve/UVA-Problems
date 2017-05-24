#include<stdio.h>

long long nCr(long long n,long long m)
{
long long res=1,i;
if(n-m<m)
m=n-m;
for(i=1;i<=m;i++,n--){
res=res*n;
res=res/i;
}
return res;
}

int main(){
long long n,r,res;
while(scanf("%lld%lld",&n,&r)==2)
{
    if(n==0&&r==0)
    break;
    res=nCr(n,r);
   printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,res);
}


return 0;
}
