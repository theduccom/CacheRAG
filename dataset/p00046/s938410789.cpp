#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<double> vd;
	double height;
	while(cin >> height) vd.push_back(height);
	sort(vd.begin(), vd.end());
	cout << vd[vd.size() - 1] - vd[0] << endl;
	return 0;
}