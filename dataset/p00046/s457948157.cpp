#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//0046
int main(){
	double h;
	vector<double> height;

	while(cin >> h){

		height.push_back(h);
	}

	sort(height.begin(),height.end());
	double diff = height.back() - height.front();
	cout << diff << endl;
}