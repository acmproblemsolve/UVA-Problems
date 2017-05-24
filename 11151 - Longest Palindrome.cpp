/***************************************

    Al-Amin
    Problem name :
    problem ID   :
    Problem algo :
    Note         :

****************************************/

/**********************Template Starts Here***********************/
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <deque>
#include <functional>
#include <string>
#include <iostream>
#include <cctype>
#include <set>

#define pb push_back
#define nl puts ("")
#define sp printf ( " " )
#define phl printf ( "hello\n" )
#define ff first
#define ss second
#define popcount (int)__builtin_popcount
#define pi 2*acos(0.0)

using namespace std;

typedef long long vlong;
typedef unsigned long long uvlong;
typedef vector < int > vi;
typedef pair < int, int > ii;
typedef pair < vlong, vlong > lili;
typedef vector < ii > vii;
typedef pair < double, double >  pdd;

template < class T > T sq( T x ) { return x * x; }

const vlong inf = 2147383647;
//const double pi = 2 * acos ( 0.0 );
const double eps = 1e-9;
const vlong maxint = 2147483647;
const vlong minint = -2147483648;
const double degtorad = pi/180;
const double radtodeg = 180/pi;
/*******************Template Interval Here****************/

/*******************All Function Here*********************/

vlong gcd ( vlong a, vlong b ) {
    if ( a < 0 ) a *= -1; if ( b < 0 ) b *= -1;
    while ( b ) {
        a = a % b;
        swap ( a, b );
    }
    return a;
}

vlong lcm ( vlong a, vlong b ) {
    return ( a / gcd ( a, b ) ) * b;
}

vlong power ( vlong a, vlong p ) {
    vlong res = 1, x = a;
    while ( p ) {
        if ( p & 1 ) res = res * x;
        x = x * x;
        p >>= 1;
    }
    return res;
}
/*******************Function Interval Here****************/

    int memo[1010][1010];
    char str[1010];

    int longestPalin(int l, int h) {
        if (l == h)
            return 1;
        if (l + 1 == h) {
            if (str[l] == str[h])
                return 2;
            else
                return 1;
        }

        if (memo[l][h] != -1)
            return memo[l][h];
        if (str[l] == str[h])
            return memo[l][h] = 2 + longestPalin(l + 1, h - 1);
        else
            return memo[l][h] = max(longestPalin(l, h - 1), longestPalin(l + 1, h));
    }

    int main() {
        int t;
        scanf("%d", &t);
        getc(stdin);
        while (t--) {
          gets(str);
            //scanf("%s",&str);
            if (strlen(str) == 0) {
                printf("0\n");
                continue;
            }
            memset(memo, -1, sizeof(memo));
            int res = longestPalin(0, strlen(str) - 1);
            printf("%d\n", res);
        }
        return 0;
    }

