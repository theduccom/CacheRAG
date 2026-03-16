#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class t>
using table = vector<vector<t>>;
const ld eps=1e-9;

//// < "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\a.txt" > "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\b.answer"

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
}

int main() {
	hurui(100000);
	ld a;
	while (cin >> a) {
		if (!a)break;
		int ans = 0;
		for (int i = 2; i <= a/2; ++i) {
			int j = a - i;
			if (sos[i] && sos[j])ans++;
		}
		cout << ans << endl;

	}
	return 0;
}