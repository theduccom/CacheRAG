#include<iostream>
using namespace std;
int main() {
	double l[10];
	double v[2];
	char c;
	while (cin >> l[0] >> c >> l[1] >> c >> l[2] >> c >> l[3] >> c >> l[4] >> c >> l[5] >> c >> l[6] >> c >> l[7] >> c >> l[8] >> c >> l[9] >> c >> v[0] >> c >> v[1]) {
		double a = 0;
		for (int i = 0; i < 10; i++){
			a += l[i];
		}
		a = a * v[0] / (v[0] + v[1]);
		for (int i = 0; i < 10; i++){
			a -= l[i];
			if (a == 0){
				cout << i + 1 << endl;
				goto c;
			}else if (a < 0){
				cout << i + 1 << endl;
				goto c;
			}
		}
	c:
		a = 0;
	}
}