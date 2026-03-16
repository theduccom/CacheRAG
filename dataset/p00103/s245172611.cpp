#include<iostream>
#include<string>
using namespace std;

int main() {
	int a;
	cin >> a;

	for (int re = 0;re < a;re++) {
		int ou = 0;
		int r = 0;
		int ap = 0;

		while (ou != 3) {
			string s;
			cin >> s;

			if (s == "OUT")ou++;

			else if (s == "HIT") {
				r++;
				if (r == 4) {
					ap++;
					r--;
				}
			}

			else if (s == "HOMERUN") {
				ap += r;
				r = 0;
				ap++;
			}
		}
		cout << ap << endl;
	}
	return 0;
}