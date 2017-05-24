#include<cstdio>
#include<cmath>

int main()
{
    int t,m,n,k,x,y;
    while(scanf("%d",&t)!=EOF){
            if(t==0)
            break;
        scanf("%d %d",&m,&n);
        for(int i=1;i<=t;i++)
        {
            scanf("%d %d",&x,&y);
            if(m==x||n==y)
                printf("divisa\n");
            if(m>x&&n>y)
                printf("SO\n");
            if(m<x&&n<y)
                printf("NE\n");
            if(m<x&&n>y)
                printf("SE\n");
            if(m>x&&n<y)
                printf("NO\n");

        }
    }
    return 0;
}
