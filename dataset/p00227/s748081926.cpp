#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <climits>
#include <cmath>
#include <cfloat>

#define FOR(i,b,n) for(int i=b;i<n;i++)
#define CLR(mat) memset(mat, 0, sizeof(mat))

using namespace std;

int n, m;
vector<int> veg;

int solve()
{
	int res = 0;
	sort(veg.rbegin(), veg.rend());
	
	FOR(i, 0 ,n)
	{
		if( (i+1)%m != 0 )
		{
			res += veg[i];
		}
	}
	
	return res;
}

int main()
{
	while( cin >> n >> m, (n||m))
	{
		veg.clear();
		
		FOR(i,0,n)
		{
			int a;
			cin >> a;
			veg.push_back(a);
		}
		
		cout << solve() << endl;
	}
	
	return 0;
}