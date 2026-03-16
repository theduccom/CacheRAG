#include<iostream>
using namespace std;
int main() {
	float v,y,t;
	while (cin >> v) {
		t = v / 9.8;
		y = 4.9*t*t;
		int a=-5;
		int ans = 0;
		while (1) {
			ans = ans + 1;
			a = a + 5;
			if (y <= a) {
				goto a;
			}
		}
	a:;
		cout << ans << endl;
	}
}
