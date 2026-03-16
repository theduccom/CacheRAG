#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <limits>
#include <cmath>
#include <cfloat>

#define FOR(i,b,n) for(int i=b;i<n;i++)
#define REP(i,b,n) for(i=b;i<n;i++)
#define CLR(mat) memset(mat, 0, sizeof(mat))

using namespace std;

double ma = numeric_limits<double>::min(), mn = numeric_limits<double>::max();

int main()
{
	double a;
	
	while(cin >> a, !cin.eof())
	{
		ma = max(ma, a);
		mn = min(mn, a);
	}
	
	
	cout << ma - mn << endl;
	
	return 0;
}