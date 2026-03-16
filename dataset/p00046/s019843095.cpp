#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	vector<double>v;
	vector<double>::iterator pv=v.begin();
	double d;
	while (cin >> d) {
		v.push_back(d);
	}
	sort(v.begin(), v.end());
	int z = v.size();
	double a = v[z - 1];
	double b = v[0];
	double c = a - b;
	cout << c << endl;
	return 0;
}