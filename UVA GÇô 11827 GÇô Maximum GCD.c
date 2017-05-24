#include<stdio.h>
#define max(a,b)    (a>b)?a:b

int num[100];

int gcd(int a, int b)
{
    if(b==0)
        return a;
        return gcd(b,a%b);

}

int main()
{
    int c,i=0,j=0,m;
    char buffer[100];

    scanf("%d\n",&c);
        while(c--)
        {
            gets(buffer);
            i=0,j=0;
            while(buffer[i])
            {
                num[j] = 0;
                while(buffer[i] && buffer[i]!=' ')
                    num[j] = num[j]*10 + buffer[i++]-'0';
                while(buffer[i]==' ')
                    i++;
                j++;
            }

            m=1;
            for(i=0;i<j;i++)
            {
                int k;
                for( k=i+1;k<j;k++)
                {
                    m = max(m,gcd(num[i], num[k]));
                }
            }
            printf("%d\n",m);
        }
    return 0;
}
