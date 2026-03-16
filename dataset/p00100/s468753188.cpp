#include<iostream>
#include<cstring>
using namespace std;
#define MAX_N 1000000
long long x[MAX_N], a, b, c, n, cnt;
int main() {
	while (1) {
		memset(x, 0, sizeof(x)); cnt = 0;
		cin >> n; if (!n) { break; }
		for (int i = 0; i < n; i++) {
			cin >> a >> b >> c;
			x[a] += b*c;
			if (x[a] >= 1000000) { cout << a << endl; cnt++; }
		}
		if (cnt == 0) { cout << "NA" << endl; }
	}
}