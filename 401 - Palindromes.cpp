#include <cstdio>
#include <cstring>


using namespace std;

int palindrome(char str[])
{
    int length, i;
    length = strlen(str);

    for(i = 0; i < length/2; i++)
    {
        if(str[i] != str[length - 1 - i])
            return 0;
    }

return 1;
}

int mirror(char str[])
{
    char rev[500];
    int i = 0;
    int len = strlen(str);
    len--;

    rev['A'] = 'A';
    rev['B'] = '*';
    rev['C'] = '*';
    rev['D'] = '*';
    rev['E'] = '3';
    rev['F'] = '*';
    rev['G'] = '*';
    rev['H'] = 'H';
    rev['I'] = 'I';
    rev['J'] = 'L';
    rev['K'] = '*';
    rev['M'] = 'M';
    rev['N'] = '*';
    rev['O'] = 'O';
    rev['P'] = '*';
    rev['Q'] = '*';
    rev['R'] = '*';
    rev['S'] = '2';
    rev['T'] = 'T';
    rev['U'] = 'U';
    rev['V'] = 'U';
    rev['W'] = 'W';
    rev['X'] = 'X';
    rev['Y'] = 'Y';
    rev['Z'] = '5';
    rev['1'] = '1';
    rev['2'] = 'S';
    rev['3'] = 'E';
    rev['4'] = '*';
    rev['5'] = 'Z';
    rev['6'] = '*';
    rev['7'] = '*';
    rev['8'] = '8';
    rev['9'] = '*';

    while(i <= len/2)
    {
        if(rev[(int)str[i]] == '*')
        return 0;

        else if(rev[(int)str[i++]] != str[len--])
        return 0;
    }

    return 1;
}


int main()
{
    char str[1000000];
    int pal, mir;

    while(scanf("%s",str)!=EOF)
    {
        pal = palindrome(str);
        mir = mirror(str);
        //printf("Pal %d\n",pal);
      //  printf("mair %d\n",mir);
        if(pal==1 && mir==1)
        printf("%s -- is a mirrored palindrome.\n\n", str);
        else if(pal==1&& mir==0)
        printf("%s -- is a regular palindrome.\n\n", str);
        else if(mir==1&&pal==0)
        printf("%s -- is a mirrored string.\n\n", str);
        else
        printf("%s -- is not a palindrome.\n\n", str);
    }
    return 0;
}
