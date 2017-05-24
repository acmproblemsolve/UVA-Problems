#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#define pi 2*acos(0.0)
using namespace std;

int main()
{
    long double s,a,arc,t,deg,rad;char f[5];

    while(scanf("%Lf%Lf%s",&s,&a,f)==3)
    {
        if(!strcmp(f,"min"))
        {
            if(a>180)
                a=360-a;
            deg=a/60.0;
            rad=(pi*deg)/180.0;
        }
        else
        {
            if(a>180)
                a=360-a;
            deg=a;
            rad=(pi*deg)/180.0;
        }
        arc=(s+6440)*rad;
        t=2*(s+6440)*sin(rad/2.0);
        printf("%0.6Lf %0.6Lf\n",arc,t);
    }
    return 0;
}
