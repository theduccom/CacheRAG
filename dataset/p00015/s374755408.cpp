#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	int n,i,j,k,s,t,u;
	int carry = 0;
	string a, b,d;
	vector<int> c;
	cin >> n;
	for (i = 0; i < n; i++) {
		c.clear();
		cin >> a;
		cin >> b;
		while (a.size() > b.size()) {
			b = "0" + b;
		}
		while (b.size() > a.size()) {
			a = "0" + a;
		}
		s = a.size();
		for (j = s-1; j >=0; j--) {
			t = a[j]-'0' + b[j]-'0';
			if (carry == 1) {
				carry = 0;
				t += 1;
			}
			while (t >= 10) {
				t -= 10;
				carry += 1;
			}
			c.push_back(t);
		}
		while (carry == 1) {
			carry = 0;
			c.push_back(1);
		}
		u = c.size();
		if (u > 80||a.size()>80||b.size()>80) {
			cout << "overflow" << endl;
		}
		else if(u<=80){
			for (k = u - 1; k >= 0; k--) {
				cout << c[k];
			}
			cout << endl;
		}
	}
	return 0;
}