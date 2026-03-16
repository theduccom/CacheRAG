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
int main() {
	complex<ld>way(0,1);
	complex<ld>now(0, 0);
	while (1) {
		int a, b;
		scanf("%d,%d", &a, &b);
		if (!a&&!b)break;
		now += way*ld(a);
		ld theta = -ld(b) / 180 * acos(-1);
		way *=complex<ld>(cos(theta),sin(theta));

	}
	cout << int(now.real()) << endl << int(now.imag()) << endl;
	return 0;
}