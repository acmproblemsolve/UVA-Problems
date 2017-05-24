#include <stdio.h>

int main() {
    int n=0, i, j;
    int m=0, l[101];
    char a[101][101], b[101][101];
   while(gets(a[n])){
        l[n] = strlen(a[n]);
        if (l[n] > m)
            m = l[n];
        n++;
    }

    for (i = n - 1; i >-1; i--) {
        for (j = 0; j < l[i]; j++)
            b[j][n-i-1] = a[i][j];
        while(j < m){
            b[j][n-i-1] = ' ';
            j++;
        }
    }
    for (i = 0; i < m; i++)
        puts(b[i]);
    return 0;
}
