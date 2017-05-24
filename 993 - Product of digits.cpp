
// http://uva.onlinejudge.org/external/9/993.html
// Runtime : 0.008s
// Tag : Ad-hoc

//======================================================
// Name        : UVa_993.cpp
// Author      : Shahab
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//======================================================

// @BEGIN_OF_SOURCE_CODE

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#define INT_MAX 2147483647
#define INT_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL unsigned long long
using namespace std;

int main ()
{
	int testCase;
	scanf ("%d", &testCase);

	while ( testCase-- ) {
		int n;
		scanf ("%d", &n);

		string output = "";
		bool invalid = false;

		while ( n >= 10 && !invalid ) {
			int prev = n;
			for ( int i = 9; i >= 2; i-- ) {
				if ( n % i == 0 ) {
					output += (i + '0');
					printf("Output -> %d\n",i);
					n /= i;
					break;
				}
			}
			if ( prev == n ) invalid = true;
		}

		reverse (output.begin(), output.end());

		if ( invalid ) cout << "-1" << endl;
		else cout << n << output << endl;
	}

	return 0;
}
