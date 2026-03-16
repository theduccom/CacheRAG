#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <cassert>
#include <functional>

using namespace std;

#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())
#define CLR(a) memset((a), 0 ,sizeof(a))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int dx[] = { -1, 0, 1, 0 }; const int dy[] = { 0, 1, 0, -1 };

int main() {
	int n;
	cin >> n;
	while (n--){
		double x1, y1, x2, y2, x3, y3, px, py, r;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		double a, b, c;
		a = hypot(x1 - x2, y1 - y2);
		b = hypot(x2 - x3, y2 - y3);
		c = hypot(x3 - x1, y3 - y1);
		px = ((y1 - y3)*(pow(y1, 2) - pow(y2, 2) + pow(x1, 2) - pow(x2, 2)) - (y1 - y2)*(pow(y1 ,2) - pow(y3 ,2) + pow(x1 ,2) - pow(x3 ,2))) / (2*(y1 - y3)*(x1 - x2) - 2.0*(y1 - y2)*(x1 - x3));
		py = ((x1 - x3)*(pow(x1, 2) - pow(x2, 2) + pow(y1, 2) - pow(y2, 2)) - (x1 - x2)*(pow(x1 ,2) - pow(x3 ,2) + pow(y1 ,2) - pow(y3 ,2))) / (2*(x1 - x3)*(y1 - y2) - 2.0*(x1 - x2)*(y1 - y3));
		r = a*b*c / sqrt((a + b + c)*(-a + b + c)*(a - b + c)*(a + b - c));
			printf("%.3lf %.3lf %.3lf\n", px, py, r);
	}
}