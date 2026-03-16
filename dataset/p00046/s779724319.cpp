#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<double> mo;
	double n;
	while(cin >> n)
		mo.push_back(n);
	sort(mo.begin(), mo.end());
	cout << *mo.rbegin()-*mo.begin()  << endl;
	return 0;
}