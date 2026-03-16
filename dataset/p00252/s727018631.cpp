#include <bits/stdc++.h>
using namespace std;

int main() {
	bool a, b, c;
	cin >> a >> b >> c;
	cout << (c || (a & b) ? "Open" : "Close") << endl;
}