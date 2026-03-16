#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

const int N = 6e4L + 11;
int p[N];

int main() {
	iota(p, p + N, 0);
	for(int i = 2; i < N; i ++) if(p[i] == i)
		for(int j = i; j < N; j += i) p[j] = i;
	ios :: sync_with_stdio(0);

	for(int x; cin >> x; ) {
		for(int i = x - 1; ; i --)
			if(p[i] == i) {
				cout << i << ' ';
				break;
			}
		for(int i = x + 1; ; i ++)
			if(p[i] == i) {
				cout << i << '\n';
				break;
			}
	}

	return 0;
}