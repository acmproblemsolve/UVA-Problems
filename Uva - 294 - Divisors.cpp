/*--------------------------------------------------------------*/
//Uva Problem No: 294
//Problem Name  : Divisors
//Type          : Number theory, sieve, primes, trial division.
//Author        : Al-Amin
//University    : DIU
//E-mail        : alamin.diu.cse@gmail.com
/*--------------------------------------------------------------*/

#include<algorithm>
#include<iostream>
#include<iterator>
#include<cassert>
#include<sstream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<complex>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<deque>
#include<list>
#include<set>
#include<map>

#define sc scanf
#define pf printf
#define ll long long
#define pi 2*acos(0.0)

#define ff first
#define se second
#define inf (1<<30)                                              //infinity value
#define pb push_back
#define mod  1000000007
#define ST(v) sort(v.begin(),v.end())
#define cover(a,d) memset(a,d,sizeof(a))
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define un(v) ST(v), v.erase(unique(v.begin(),v.end()),v.end())

using namespace std;
int main()
{
    long long lwr,upp,t,j,i,divisor,Max,num;
    cin>>t;
    while(t--)
    {
     sc("%lld %lld",&lwr,&upp);
     Max=0;
     if(lwr==1&&upp==0)
     {
          printf("Between 1 and 1, 0 has a maximum of 2 divisors.\n");
          continue;
     }
     for(i=lwr;i<=upp;i++)
     {
         printf("\nLow -> %lld\n",i);
         divisor=0;
         int p=sqrt(i);
         printf("p  -> %d\n",p);
       for(j=1;j<=p;j++){
            printf("j  -> %d\n",j);
         if(i%j==0){
            divisor++;
             printf("divisor 1 -> %lld\n",divisor);
         if(i/j!=j){
         divisor++;
         printf("divisor 2 -> %lld\n",divisor);
         }
       }
       if(Max<divisor){
        Max=divisor;
        printf("Max  -> %lld\n",Max);
        num=i;
        printf("Num -> %lld\n\n",num);
       }
     }
     }
    printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",lwr,upp,num,Max);
    }
    return 0;
}
