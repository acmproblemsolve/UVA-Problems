    #include<stdio.h>

    int main()
    {
       long long input,sq,i,F[5001];
       F[0] = 0;
       F[1] = 1;
       for( i=2 ; i<=5000 ; i++)
       {
          F[i] = F[i-1]+F[i-2];
       }

       while(scanf("%lld",&input)==1)


          printf("The Fibonacci number for %lld is %lld\n",input,F[input]);
       return 0;
    }
