#include <bits/stdc++.h>
using namespace std;
vector<long double> v; long double x;
int main() {
	while(cin >> x) v.push_back(x);
	sort(v.begin(), v.end());
	cout << v.back() - v.front() - 0.009L << endl;
	return 0;
}