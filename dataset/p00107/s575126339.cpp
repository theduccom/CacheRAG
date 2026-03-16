#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
	double r[3];
	while (cin >> r[0] >> r[1] >> r[2]){
		if (r[0] == 0 && r[1] == 0 && r[2] == 0){break;}
		sort(r, r + 3);
		double n = sqrt(r[0] * r[0] + r[1] * r[1]) / 2;
		int num; cin >> num;
		for (int i = 0; i < num; i++){
			double a; cin >> a;
			if (a > n)
				cout << "OK";
			else cout << "NA";
			cout << endl;
		}
	}
	return 0;
}