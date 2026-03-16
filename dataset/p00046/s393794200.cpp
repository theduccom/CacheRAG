#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	double mind, maxd, d;
	cin >> d;
	mind = d;
	maxd = d;
	while (cin >> d){
		mind = min(mind, d);
		maxd = max(maxd, d);
	}
	cout << maxd - mind << endl;
}