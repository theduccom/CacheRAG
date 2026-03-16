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
	long long int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		double xa, ya, ra, xb, yb, rb;
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		double ab = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
		if (ab + rb - ra <= -EPS) cout << 2 << endl;
		else if (ab + ra - rb <= -EPS) cout << -2 << endl;
		else if (ab - ra - rb >= EPS) cout << 0 << endl;
		else cout << 1 << endl;
	}
	return 0;
}