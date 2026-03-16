#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <bitset>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <fstream>
#include <tuple>
#include <set>
#include <functional> 
#include <string.h>
//#include <assert.h>
//#include <typeinfo.h>
#include <time.h>

#define X first
#define Y second
#define MP make_pair
#define MT make_tuple
#define FOR(i, n) for(int (i) = 0; (i) < (n); ++(i))
#define REP(i, a, n) for(int (i) = (a); (i) < (n); ++(i))
typedef long long ll;
typedef std::pair<int, int> pii;
typedef std::pair<ll, ll > pll;
using namespace std;

const int INIT_SIZE_MAX = (1 << 29) + 10;
const int INIT_SIZE_MIN = -(1 << 29) - 10;
const int INIT_SIZE = 0;
const int MAX = 8;
const int DIR_SIZE = 12;
const double PI = 3.1415926535897932384;

template<class T, class U>
void convert(T &t, U &u){
	stringstream ss;
	ss << t;
	ss >> u;
}

int main(){
	int x, h;
	while (cin >> x >> h && x|h){
		double x2 = x, h2 = h;
		double hh = sqrt((h2 * h2) + ((x2 / 2)*(x2 / 2)));
		printf("%.6f\n", (x * hh / 2 * 4) + (x * x));
	}
}