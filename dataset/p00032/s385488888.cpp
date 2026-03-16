#include <bits/stdc++.h>
using namespace std;

int main() {
	ios :: sync_with_stdio(false);
	char t;
	int c1 = 0, c2 = 0;
	for(int a, b, c; cin >> a >> t >> b >> t >> c; ) {
		if(a * a + b * b == c * c)
			c1 ++;
		if(a == b)
			c2 ++;
	}
	cout << c1 << '\n' << c2 << '\n';
	return 0;
}