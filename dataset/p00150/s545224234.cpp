#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

vector<int>primes;
vector<int>sos;
void hurui(const int amax) {
	static bool flag = false;
	if (flag)return;
	sos = vector<int>(amax + 1, true);
	sos[0] = false; sos[1] = false;
	for (int i = 2; i <= amax; ++i) {
		if (sos[i]) {
			for (int j = 2 * i; j <= amax; j += i)sos[j] = false;
		}
	}
	for (int i = 0; i <= amax; ++i) {
		if (sos[i]) {
			primes.push_back(i);
		}
	}
	flag = true;
}

int main() {
	hurui(10000);
	while (1) {

		int N; cin >> N;
		if (!N)break;
		while (1) {
			if (sos[N] && sos[N - 2]) {
				cout << N - 2 << " " << N << endl;
				break;
			}
			N--;
		}
	}

	return 0;
}