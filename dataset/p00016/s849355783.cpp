#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <iostream>
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
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
template<class T> T RoundOff(T a){ return int(a+.5-(a<0)); }
template<class T, class C> void chmax(T& a, C b){ if(a < b) a = b; }
template<class T, class C> void chmin(T& a, C b){ if(b < a) a = b; }
template<class T> int GetInt(T a){ return a >= 0 ? floor(a) : ceil(a); }
template<class T, class C> pair<T, C> mp(T a, C b){ return make_pair(a, b); }
const double PI = 3.141592653583;
#define DegreeToRadian(Degree) ((float)Degree * (PI / 180.0f))

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

int main()
{
	int x, r, R = 0;
	pair<double, double> point = mp(0, 0);
	string str;
	
	while(cin >> str)
	{
		vector<string> l = split(str, ",");

		x = r = 0;
		rep(i, l[0].size())
		{
			if(l[0][i] != '-')
				x += (l[0][i] - '0') * pow(10, (float)l[0].size() - i -1);
		}
		rep(i, l[1].size())
		{
			if(l[1][i] != '-')
				r += (l[1][i] - '0') * pow(10, (float)l[1].size() - i -1);
		}
		if(l[0][0] == '-')
			x *= -1;
		if(l[1][0] == '-')
			r *= -1;

		if(!(x || r))
			break;

		R = min(R, 360);

		point.first += sin(DegreeToRadian(R)) * x;
		point.second += cos(DegreeToRadian(R)) * x;

		R += r;
	}

	pint res = mp(GetInt(point.first), GetInt(point.second));
	printf("%d\n%d\n", res.first, res.second);
}