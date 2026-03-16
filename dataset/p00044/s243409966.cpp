#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MAX 50100

static bool gosei[MAX];

void a() {
	for (int i = 2; i <= sqrt(MAX); i++)
		if (gosei[i] == false) {
			for (int j = 2, k = 0; (k = i*j) <= MAX; j++)
				gosei[k] = true;
		}
}

int M(int n) {
	for (int i = 1;; i++)
		if (!gosei[n + i])
			return n + i;
}

int m(int n) {
	for (int i = 1;; i++)
		if (!gosei[n - i])
			return n - i;
}

int main() {
	a();
	for (int b; cin >> b;)
		cout << m(b) << " " << M(b) << endl;
	return 0;
}