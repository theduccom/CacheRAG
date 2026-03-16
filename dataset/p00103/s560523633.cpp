#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	while (n--) {
		int res = 0, O = 0;
		vector<int> r(3);
		while (true) {
			cin >> s;
			if (s == "HIT") {
				res += r[2];
				r[2] = r[1];
				r[1] = r[0];
				r[0] = 1;
			}
			else if (s == "HOMERUN") {
				res += r[0] + r[1] + r[2] + 1;
				r[0] = r[1] = r[2] = 0;
			}
			else {
				O++;
				if (O >= 3) {
					break;
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}