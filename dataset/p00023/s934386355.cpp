#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <array>
#include <stack>
#include <queue>
#include <chrono>
#include <numeric>
#include <memory.h>
#include <map>
#include <math.h>
#include <utility>
#include <set>

#pragma warning(disable:4996)
using namespace std;
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
typedef long long Int;
const double PI = 3.141592653589793238;
const Int INF = 999999999999;
typedef pair<int, int> P;


int main()
{
	int n;
	double  xa, ya, ra, xb, yb, rb;

	cin >> n;
	REP(i, n){
		cin >> xa >> ya >> ra >> xb >> yb >> rb;

		double dx = (xa - xb)*(xa - xb) + (ya - yb)*(ya - yb);

		dx = sqrt(dx);

		if (dx > (ra + rb)){
			cout << 0 << endl;
			continue;
		}

		if (dx < (rb-ra)){
			cout << -2 << endl;
			continue;
		}

		if (dx < (ra - rb)){
			cout << 2 << endl;
			continue;
		}

		cout << 1 << endl;
	}
	return 0;

}