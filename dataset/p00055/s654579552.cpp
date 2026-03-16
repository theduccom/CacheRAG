#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<int, int>P;

int main() {
	double f;
	while (cin >> f) {
		double cnt = f;
		for (int i = 2; i <= 10; i++) {
			if (i & 1)f /= 3;
			else f *= 2;
			cnt += f;
		}
		printf("%.8f\n", cnt);
	}
	return 0;
}