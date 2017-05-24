#include <stdio.h>
#include <math.h>
#define pi 3.14159265359
int main()
{
    double rad, side, angle, height, triangle, area;
    while(scanf("%lf%lf", &rad, &side)==2)
    {
        angle=(pi*2)/side;
        height=(sin(angle)*rad);
        triangle=(height*rad)/2;
        area=side*triangle;
        printf("%.3lf\n", area);
    }
}
