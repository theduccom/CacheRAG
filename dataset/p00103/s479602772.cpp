#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;
int main() {
	string s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int r[4] = {}, p=0, o = 0;
		r[0] = 1;
		while (o != 3) {
			cin >> s;
			if (s[1] == 'I') {
				if (r[3])
					p++;
				for (int j = 3; j >= 1; j--)
					r[j] = r[j - 1];
			}
			else if (s[1] == 'U')
				o++;
			else if (s[1] == 'O') {
				p++;
				for (int j = 1; j <= 3; j++) {
					if (r[j]) {
						p++;
						r[j] = 0;
					}
				}
			}
		}
		cout << p << endl;
	}
	return 0;
}
