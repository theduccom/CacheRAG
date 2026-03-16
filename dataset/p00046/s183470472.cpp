#include <iostream>
#include <algorithm>
using namespace std;
int main(){	
	double amax, amin, tmp;
	cin >> tmp;
	amax = tmp;
	amin = tmp;
	while (cin >> tmp){
		amin = min(tmp, amin);
		amax = max(tmp, amax);
	}
	cout << amax - amin << endl;
}