#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	vector<double> h;
	double n;
	while(cin >> n){
		h.push_back(n);
	}
	
	sort(h.begin(),h.end());
	
	double height = h.back() - h.front();
	cout << height << endl;
	
	return 0;
}