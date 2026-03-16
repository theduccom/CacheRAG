#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int a[3], n, r;
	double max;
	while (1){
		cin >> a[0] >> a[1] >> a[2];
		if (!a[0] && !a[1] && !a[2]) break;
		sort(a, a + 3);
		max = sqrt(a[0] * a[0] + a[1] * a[1]) / 2.0;
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> r;
			if (r > max) cout << "OK" << endl;
			else cout << "NA" << endl;
		}
	}
	return 0;
}