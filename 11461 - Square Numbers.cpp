#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int a,b,s;
    while(scanf("%d %d",&a,&b)!= EOF){
        int count=0;
        if(a==0&&b==0) return 0;
        if(a>b){
                a=a^b;
                b=a^b;
                a=a^b;
        }
        for(int i=a;i<=b;i++){
            s=sqrt(i);
            if(s*s==i) count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
