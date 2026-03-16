#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int n;
double xa, ya, ra, xb, yb, rb;
bool doswap = false;

double dist(double x1, double x2, double y1, double y2) {
	double dx = xa - xb;
	double dy = ya - yb;
	return sqrt(dx*dx + dy*dy);
}

void swap(double *arg1, double *arg2) {
	double tmp = *arg1;
	*arg1 = *arg2;
	*arg2 = tmp;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> xa >> ya >> ra >> xb >> yb >> rb;

		doswap = false;

		if (ra < rb) {
			swap(&xa, &xb);
			swap(&ya, &yb);
			swap(&ra, &rb);
			doswap = true;
		}

		double dist_ab = dist(xa, ya, xb, yb);

		if (dist_ab < ra) {
			if (dist_ab + rb < ra) {
				if (doswap) cout << "-2" << endl;
				else cout << "2" << endl;
			}
			else cout << "1" << endl;
		} else if (dist_ab <= ra + rb) cout << "1" << endl;
		else cout << "0" << endl;
	}

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/