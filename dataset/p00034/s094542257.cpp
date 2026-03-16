#include <iostream>
#include <string>
using namespace std;

int l[10] = {}, v[2];

void input(string s) {
	int x = 0,n=0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ',') {
			n = n * 10 + s[i] - '0';
			continue;
		}
		if (x < 10) {
			l[x++] = n;
			n = 0;
		}
		else {
			v[0] = n;
			n = 0;
		}
	}
	v[1] = n;
}


int main() {
	string s;
	while (cin >> s) {
		int len = 0, x1 = 0;
		double x;
		input(s);
		for (int i = 0; i < 10; i++)
			len += l[i];
		x = (double)len * v[0] / (double)(v[0] + v[1]);
		for (int i = 0; i < 10; i++) {
			x1 += l[i];
			if (x1 >= x) {
				cout << i + 1 << endl;
				break;
			}
		}
	}
	return 0;
}
