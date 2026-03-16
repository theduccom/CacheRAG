#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <iostream>
#include <cctype>
#include <sstream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>
#include <fstream>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
template<class T> T RoundOff(T a){ return int(a+.5-(a<0)); }
template<class T, class C> void chmax(T& a, C b){ if(a < b) a = b; }
template<class T, class C> void chmin(T& a, C b){ if(b < a) a = b; }
template<class T, class C> pair<T, C> mp(T a, C b){ return make_pair(a, b); }


vector<string> split(string str, string delim)
{
    vector<string> result;
    int cutAt;
    while( (cutAt = str.find_first_of(delim)) != str.npos )
    {
        if(cutAt > 0)
        {
            result.push_back(str.substr(0, cutAt));
        }
        str = str.substr(cutAt + 1);
    }
    if(str.length() > 0)
    {
        result.push_back(str);
    }
	return result;
}

bool range(int x, int y){ return 0 <= x && x < 10 && 0 <= y && y < 10; }

int main()
{
	int field[10][10];
	memset(field, 0, sizeof(field));

	string str;

	while(cin >> str)
	{
		vector<string> v = split(str, ",");
	
		int x = v[0][0] - '0', y = v[1][0] - '0', s = v[2][0] - '0';

		vint dx, dy;
		
		if(s)
		{
			dx.push_back(0); dx.push_back(0); dx.push_back(0); dx.push_back(1); dx.push_back(-1);
			dy.push_back(0); dy.push_back(1); dy.push_back(-1); dy.push_back(0); dy.push_back(0);
			s--;
		}
		if(s)
		{
			dx.push_back(1); dx.push_back(1); dx.push_back(-1); dx.push_back(-1);
			dy.push_back(1); dy.push_back(-1); dy.push_back(1); dy.push_back(-1);
			s--;
		}
		if(s)
		{
			dx.push_back(0); dx.push_back(0); dx.push_back(2); dx.push_back(-2);
			dy.push_back(2); dy.push_back(-2); dy.push_back(0); dy.push_back(0);
			s--;
		}

		int r = 0;

		rep(i, dx.size())
			if(range(x + dx[i], y + dy[i]))
				field[x + dx[i]][y + dy[i]]++;
	}

	int res = 0;
	int blank = 0;

	rep(i, 10) rep(j, 10)
	{
		if(!field[i][j])
			blank++;
		else
			chmax(res, field[i][j]);
	}

	cout << blank << endl << res << endl;
}