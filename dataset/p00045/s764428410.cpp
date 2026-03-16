#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
const ld eps = 1e-9;

//// < "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\a.txt" > "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\b.txt"


int main() {
	int a, b;
	int c = 0, d = 0;
	int n = 0;
	while (scanf("%d,%d", &a, &b)!=EOF) {
		c += a*b;
		d += b;
		n++;
	}
	cout << c << endl << int((ld(d)+0.5*n) / n) << endl;
	return 0;
}