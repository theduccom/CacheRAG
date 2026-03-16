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
#define EPS 1e-15

using namespace std;

typedef complex<double> point;
typedef vector<point> polygon;
typedef pair<int, int> paii;
typedef long long ll;

int main()
{
	int cnt = 0;
	vector<string> in;
	string str;
	
	while( cin >> str, !cin.eof())
	{
		in.push_back(str);
	}
	
	FOR(i, 0, (int)in.size())
	{
		string rstr = string(in[i].rbegin(), in[i].rend());
		
		if( in[i] == rstr )
			cnt++;
	}
	
	cout << cnt << endl;	
		
	return 0;
}