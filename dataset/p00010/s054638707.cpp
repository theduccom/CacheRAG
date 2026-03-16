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

typedef complex<double> P;

/*
 // a1,a2ツづーツ津環づゥツ陳シツ静シツづ1,b2ツづーツ津環づゥツ陳シツ静シツづ個古ーツ点ツ計ツ算
 P intersection_l(P a1, P a2, P b1, P b2)
 {
 	P a = a2 - a1; P b = b2 - b1;
 	return a1 + a * cross(b, b1-a1) / cross(b, a);
 }
 */

double cross(P a, P b)
{	return a.real() * b.imag() - b.real() * a.imag(); }
int main()
{
	int n;
	cin >> n;
	
	while(n--)
	{
		vector<P> p(3);
		
		rep(i, 3) cin >> p[i].real() >> p[i].imag();
		
		// ツ陳点ツづーツ出ツつキ
		P c1((p[0] + p[1]) / 2.0), c2((p[1] + p[2]) / 2.0);
		
		// ツ法ツ静シツベツクツトツδ仰づーツ出ツつキ
		P u1((p[0] - p[1]) * P(0, 1)), u2((p[1] - p[2]) * P(0, 1));
		
		// ツ古ーツ点ツづーツ出ツつキ
		P crs(c1 + u1 * cross(u2, (c2 - c1)) / cross(u2, u1));
		
		// ツ板シツ径ツづーツ出ツつキ
		double r = abs(crs - p[0]);
		
		printf("%.3f %.3f %.3f\n", crs.real(), crs.imag(), r);
	}
}