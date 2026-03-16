#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	double xa, ya, xb, yb, ra, rb;
	vector<int> Decision;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		if ((ra+rb)*(ra + rb) < ((xb - xa)*(xb - xa) + (yb - ya)*(yb - ya)))Decision.push_back(0);
		else if ((ra - rb)*(ra - rb) > ((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb))) {
			if (ra > rb)Decision.push_back(2);
			else Decision.push_back(-2);
		}
		else if (((xb - xa)*(xb - xa) + (yb - ya)*(yb - ya)) <= (ra + rb)*(ra + rb))Decision.push_back(1);
	}
	for (int i = 0; i < Decision.size(); i++)cout << Decision[i] << endl;
	return 0;
}