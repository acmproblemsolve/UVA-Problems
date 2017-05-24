#include<cstdio>

int t, a[10010];

void fact(int n) {
    long long m = 1;
    for(int i = 1; i <= n; i++) {
        m = (m * i);
        while(m % 10 == 0)
        m = m/10;
        m = m % 100000;
        a[i] = m % 10;
    }
}

int main() {
    fact(10000);
    while(scanf("%d", &t) == 1) {
        printf("%5d -> %d\n", t, a[t]);
    }
}
