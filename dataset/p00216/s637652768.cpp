#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <complex>

#define FOR(i,b,n) for(int i=b;i<n;i++)
#define RFOR(i,b,n) for(int i=n-1;i>=b;i--)
#define CLR(mat) memset(mat, 0, sizeof(mat))
#define NCLR(mat) memset(mat, -1, sizeof(mat))

using namespace std;

typedef pair<int,int> paii;
typedef long long ll;

int main()
{
	int w;

	while(cin >> w, w >= 0)
	{
		int res = 1150;
		
		if( w > 10 )
			res += min(1250, (w-10)*125);
		if( w > 20 )
			res += min(1400, (w-20)*140);
		if( w > 30 )
			res += (w-30)*160;
			
		cout << 4280 - res << endl;
	}
	
	return 0;
}