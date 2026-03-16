#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	double m;
	vector<double> v;
	while(cin >> m){
		v.push_back(m);
	}
	sort(v.begin(), v.end());
	cout << v[v.size() - 1] - v[0] << endl;
	return 0;
}