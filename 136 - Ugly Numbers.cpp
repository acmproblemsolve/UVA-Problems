using namespace std;
#define MAXSIZE 15

int minimum(int x,int y,int z)
{
    if (x return (y}

int nextUgly(int nth)//nth
{
    int num2,num3,num5;
    int ugly[MAXSIZE], ptr2, ptr3, ptr5;
        ugly[0]=1;int i=0;
        ptr2=ptr3=ptr5=0;

   for(i=1;i  {
    num2=ugly[ptr2]*2;
    num3=ugly[ptr3]*3;
    num5=ugly[ptr5]*5;

    ugly[i]=minimum(num2,num3,num5);

    if(ugly[i]==num2) ptr2++;
    if(ugly[i]==num3) ptr3++;
    if(ugly[i]==num5) ptr5++;

   }

    return ugly[nth-1];
}

int main()
{

    printf("15th Ugly number is %d\n",nextUgly(15));
}
