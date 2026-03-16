#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
double x[100000], maxn;int  cnt;
int main() {
	while (cin >> x[cnt]) {
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		for (int j = i; j < cnt; j++) {
			maxn = max(maxn, abs(x[i] - x[j]));
		}
	}
	cout << maxn << endl;
}