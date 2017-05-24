#include<stdio.h>

int main()
{
    int B[5],C[5],G[5],i,l,j,k,temp,BCG,BGC,CBG,CGB,GCB,GBC,arry[7],minimun;

    while(scanf("%d %d %d %d %d %d %d %d %d",&B[1],&G[1],&C[1],&B[2],&G[2],&C[2],&B[3],&G[3],&C[3])!=EOF){

     arry[1]=BCG=B[2]+B[3]+C[1]+C[3]+G[1]+G[2];
     arry[2]=BGC=B[2]+B[3]+G[1]+G[3]+C[1]+C[2];
     arry[3]=CBG=C[3]+C[2]+B[1]+B[3]+G[1]+G[2];
     arry[4]=CGB=C[2]+C[3]+G[1]+G[3]+B[1]+B[2];
     arry[5]=GBC=G[2]+G[3]+B[1]+B[3]+C[1]+C[2];
     arry[6]=GCB=G[2]+G[3]+C[1]+C[3]+B[1]+B[2];
     k=0;
     minimun = arry[1];
     for(j=2;j<7;j++)
     {
         if(arry[j]<minimun)
         {
             minimun=arry[j];
             k=j;
         }

     }
     if(k==0)
     {
         printf("BCG %d\n",minimun);

     }

     if(k==2)
     {
        printf("BGC %d\n",minimun);
     }
     if(k==3)
     {
        printf("CBG %d\n",minimun);
     }
     if(k==4)
     {
        printf("CGB %d\n",minimun);
     }

     if(k==5)
     {
        printf("GBC %d\n",minimun);
     }
     if(k==6)
     {
        printf("GCB %d\n",minimun);
     }
    }

    return 0;

}
