#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#include<queue>
#include<algorithm>
#include<utility>
#include<vector>
#include<list>
using namespace std;
int main() {
	double t, v, y,n,in;
	while (cin >> v) {
		t = v / 9.8;
		y = 4.9*pow(t, 2);
		n = (y + 5) / 5;
		in = (int)n;
		if (in == n)cout << n << endl;
		else cout << (int)n+1 << endl;
	}
	return 0;
}
