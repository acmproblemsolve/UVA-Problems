#include<iostream>
#include<cstdio>
#include<algorithm>

#define pi 2*acos(0.0)
using namespace std;

int main()
{
    long double s,a,arc,chord,deg,rad;char type[5];

    while(scanf("%Lf%Lf%s",&s,&a,type)==3)
    {
        if(!strcmp(type,"min"))
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
        chord=2*(s+6440)*sin(rad/2.0);
        printf("%0.6Lf %0.6Lf\n",arc,chord);
    }
    return 0;
}
