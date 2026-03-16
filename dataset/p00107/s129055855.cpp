#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	int d, w, h;
	int cheese[3];
	while (cin >> d >> w >> h && d && w && h) {
		cheese[0] = d;
		cheese[1] = w;
		cheese[2] = h;
		sort(cheese, cheese+3);
		double cr = sqrt(pow(cheese[0] / 2, 2) + pow(cheese[1] / 2, 2));
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			double r;
			cin >> r;
			if (r > cr)
				cout << "OK" << endl;
			else
				cout << "NA" << endl;
		}
	}
	return 0;
}