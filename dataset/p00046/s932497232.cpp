#include <bits/stdc++.h>
using namespace std;

int main() {
	int c = 0;
	double m[100000];
	while(scanf("%lf", &m[c]) != EOF){
		c++;
	}
	sort(m, m + c);
	cout << fixed << m[c - 1] - m[0] << endl;
	return 0;
}