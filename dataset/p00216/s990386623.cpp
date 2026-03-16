#define _USE_MATH_DEFINES
#include <iostream>
#include <complex>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <cmath>
#include <math.h>
#include <numeric>
#include <list>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <climits>
#include <set>
#include <memory.h>
#include <memory>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cassert>
#include <map>
#include <cassert>
#include <time.h>
#include <ctime>

using namespace std;

typedef complex<double> xy_t;
typedef pair<xy_t, xy_t> line;
typedef vector<xy_t> polygon;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<int , P> PP;
typedef pair<int, string> Ps;
typedef vector<int> vec;
typedef vector<vec> mat;
const int INF = 1 << 29;
const double EPS = 1e-10;
const double PI = 3.1415926535897932384626433832795;
const int CLK = CLOCKS_PER_SEC;

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, m, n) for(int i = m; i < n; i++)
#define repD(i, n) for(int i = n; i >= 0; i--)

int calc(int w){
	int res = 1150;
	if(w <= 10) return res;
	if(w <= 20){
		res += (w - 10) * 125;
		return res;
	}
	if(w <= 30){
		res += 1250 + (w - 20) * 140;
		return res;
	}
	res += 2650 + (w - 30) * 160;
	return res;
}

int main(){
	int w;
	while(cin >> w && w != -1){
		cout << 4280 - calc(w) << endl;
	}
	return 0;
}