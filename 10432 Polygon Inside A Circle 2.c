#include <stdio.h>
#include <math.h>
#define PI (2*acos(0))
int main()
{
    double area, r, n;
    while (scanf("%lf %lf",&r,&n)==2)
    {
        area = r*r*sin(2*PI/n)/2.0;
        printf("%.3lf\n",area*n);
    }
    return 0;
}
