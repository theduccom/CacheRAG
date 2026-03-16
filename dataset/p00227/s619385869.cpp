#include <stdio.h>
#include <cctype>
#include <limits.h>
#include <math.h>
#include <complex>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <iostream>

#define VARIABLE(x) cerr << #x << "=" << x << endl
#define BINARY(x) static_cast<bitset<16> >(x);
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)
#define if_range(x, y, w, h) if (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))

const int INF = 1000000000;
const double EPS = 1e-8;
const double PI = 3.14159;
int dx[4]={0, 1, 0, -1}, dy[4]={-1, 0, 1, 0};
using namespace std;
//typedef pair<int, int> P;
struct P {
	int x, y;
	P(int x, int y):x(x), y(y){}
	P(){}
};

/** Problem0227 : Thanksgiving **/
int main()
{
	int N, M;
	while (cin>>N>>M, N||M) {
		vector<int> v(N);
		rep(i, N) cin>>v[i];
		sort(v.begin(), v.end(), greater<int>());
		int ans=0;
		int t=1;
		rep(i, N) {
			if (t!=M) {
				t++;
				ans+=v[i];
			} else {
				t=1;
			}
		}
		cout << ans << endl;
	}
}