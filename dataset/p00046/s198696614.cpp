#include "bits/stdc++.h"
using namespace std;

int main() {
	vector<double> vec(0); double temp;
	while (cin >> temp) { vec.push_back(temp); }
	sort(vec.begin(), vec.end());
	cout << vec[vec.size() - 1] - vec[0] << endl;
	return 0;
}
