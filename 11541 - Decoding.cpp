#include<cstdio>
#include<cstring>
#include<string>

using namespace std;
#define sc scanf
#define pf printf

int main()
{
    int t,no=0;
    char s[1000],c;
    sc("%d",&t);
    sc("%d",stdin);
    //getchar();
    while(t--)
    {
      gets(s);
      int l=strlen(s);
      pf("Case %d: ",++no);
      for(int i=0;i<l;i++)
      {
          int p=0;
                if(s[i]>='A'&&s[i]<='Z')
                 c=s[i];
                else if(s[i]>='0'&&s[i]<='9')
                {
                    p = s[i]-'0';
                    //printf("\nP -> %d\n",p);
                    i++;

                    while(s[i]>='0'&&s[i]<='9')
                    {
                        p=p*10+s[i]-'0';
                        i++;
                    }
                    i--;
                    for(int j=0;j<p;j++)
                    printf("%c",c);
                }


        }
        printf("\n");
      }

    return 0;
}
