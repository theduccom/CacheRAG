#include <iostream>
#include <string>
using namespace std;
short int n[3];

void input(string s){
	int x=0,l=0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ',') {
			x = x * 10 + s[i] - '0';
			continue;
		}
		n[l++] = x;
		x = 0;
	}
	n[2] = x;
}


int main() {
	string s;
	short int cnt1 = 0, cnt2 = 0;
	while (cin >> s) {
		input(s);
		if (n[0]*n[0] + n[1] * n[1] == n[2] * n[2])
			cnt1++;
		if (n[0] == n[1])
			cnt2++;
	}
	cout << cnt1 << endl << cnt2 << endl;
	return 0;
}
