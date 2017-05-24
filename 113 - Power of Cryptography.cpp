/******************************************************************
***   Uva Problem No: 113                                       ***
***   Problem Name  : Power of Cryptography                     ***
***   Type          : Math                                      ***
***   Author        : Al-Amin                                   ***
***   E-mail        : alamin.iyakub@diu.edu.bd                  ***
***   University    : DIU, Dept. of CSE                         ***
***   Facebook      : http://www.facebook.com/alamin25          ***
******************************************************************/

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
const double pi = 2 * acos ( 0.0 );
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



int main()
{
    double n,p,res,k;
     #ifdef localhost
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
     #endif

  while(scanf("%lf %lf",&n,&p)!=EOF)
  {
     k = 1/n;
     res = pow(p,k);
     printf("%0.0lf\n",res);
  }
  return 0;
}
