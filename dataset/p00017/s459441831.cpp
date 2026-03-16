#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while (getline(cin, s)) {
		int n = s.size();
		for (int i = 0; i < 26; i++) {
			bool flag = false;
			for (int j = 0; j + 3 <= n; j++) {
				if (s.substr(j, 3) == "the" && (j == 0 || s[j - 1] < 'a' || s[j - 1] > 'z') && (j + 3 == n || s[j + 3] < 'a' || s[j + 3] > 'z')) {
					flag = true;
				}
			}
			for (int j = 0; j + 4 <= n; j++) {
				if (s.substr(j, 4) == "this" && (j == 0 || s[j - 1] < 'a' || s[j - 1] > 'z') && (j + 4 == n || s[j + 4] < 'a' || s[j + 4] > 'z')) {
					flag = true;
				}
			}
			for (int j = 0; j + 4 <= n; j++) {
				if (s.substr(j, 4) == "that" && (j == 0 || s[j - 1] < 'a' || s[j - 1] > 'z') && (j + 4 == n || s[j + 4] < 'a' || s[j + 4] > 'z')) {
					flag = true;
				}
			}
			if (flag) {
				cout << s << endl;
				break;
			}
			for (int j = 0; j < n; j++) {
				if (s[j] >= 'a' && s[j] <= 'z') {
					s[j] = s[j] == 'z' ? 'a' : s[j] + 1;
				}
			}
		}
	}
	return 0;
}