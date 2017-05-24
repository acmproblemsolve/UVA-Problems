#include <stdio.h>
int main()
{
    int t,number,i;

    scanf("%d", &t);

    for(i = 0 ; i < t ; i++)
    {
        scanf("%d", &number);
        number = (number * 63 + 7492) * 5 - 498 ;
        number /= 10;
        if(number >= 0)
        {
            printf("%d\n", number%10);
        }
        else
        {
            printf("%d\n", -number%10);
        }
    }
    return 0;
}
