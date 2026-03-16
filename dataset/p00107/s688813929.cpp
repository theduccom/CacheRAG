#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int a[3], n;
	while(cin >> a[0] >> a[1] >> a[2], a[0]){
		sort(a, a+3);
		double s = sqrt(a[0]*a[0] + a[1]*a[1]);
		cin >> n;
		while(n--){
			double r;cin >> r;
			cout << (s < r*2 ? "OK" : "NA") << endl;
		}
	}
	return 0;
}