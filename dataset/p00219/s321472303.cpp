#include<iostream>
#include<string>
using namespace std;

string grf(int x) {
	string s;
	if (x == 0) {
		s = "-";
		return s;
	}
	else {
		for (int i = 0;i < x;i++)s.push_back('*');
	}
	return s;
}

int main() {
	int n;
	while (cin>> n, n) {
		int a[10] = {};
		for (int i = 0;i < n;i++) {
			int b;
			cin >> b;
			a[b]++;
		}
		for (int i = 0;i < 10;i++) {
			cout << grf(a[i]) << endl;
		}
	}
	return 0;
}