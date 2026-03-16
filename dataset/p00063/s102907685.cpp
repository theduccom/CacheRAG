#include<iostream>
#include<string>
using namespace std;

int main() {
	string s1("");
	int l, i, out, ans = 0;
	while (cin >> s1) {
		out = 0;
		l = s1.size();
		for (i = 0; i < l / 2; i++) {
			if (s1.at(i) != s1.at(l - i - 1)) {
				out = 1;
				break;
			}
		}
		if (out == 0) {
			ans = ans + 1;
		}
	}
	cout << ans << endl;
	return 0;

}

