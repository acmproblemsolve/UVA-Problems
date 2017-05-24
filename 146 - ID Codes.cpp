#include<stdio.h>
#include<string.h>
#include <iostream>     // std::cout
#include <algorithm>
using namespace std;

int Main()
{
	int l;
    char s[100];
    while(gets(s))
    {
        if(s[0]=='#')
        break;

        l=strlen(s);

        if(next_permutation(s,s+l))
        puts(s);
        else
        printf("No Successor\n");
    }
    return 0;
}
