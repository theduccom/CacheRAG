#define _USE_MATH_DEFINES
#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <stack>
#include <cctype>
#include <cstdlib>
using namespace std;

#define INF (1 << 20)
#define EPS (1e-10)
#define EQ(a,b) (fabs((a)-(b)) < EPS)

int main(){
	double v;
	while (cin >> v) {
		int n = 0;
		while (n - v * v / 98 - 1.0 < EPS) ++n;
		cout << n << endl;
	}
	return 0;
}