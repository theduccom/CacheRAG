#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
#define N 1000000
int p[N];
int main() {
	int i, j,n,cnt;
	for (i = 2; i <= sqrt(N); i++) if (!p[i]) for (j = i*i; j < N; j += i)p[j] = 1;
	while (cin >> n) {
		for (i = n - 1;; i--) if (!p[i]) { cout << i<<" "; break;}
		for (i = n + 1;; i++) if (!p[i]) { cout << i << endl; break; }
	}
	return 0;
}