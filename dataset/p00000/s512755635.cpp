#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
int main()
{
	FOR(i, 1, 10)FOR(j, 1, 10)
	{
		cout << i << "x" << j << "=" << i*j << endl;
	}
	return 0;
}