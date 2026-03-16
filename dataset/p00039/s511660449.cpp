#include <iostream>
#include <map>

#define COMP(a, b) ((a) == (b) ? (-a) : (a))

using namespace std;

int main() {
	int pre, cur, ans;
	string str;
	map<char, int> v;
	v['I'] = 1;
	v['V'] = 5;
	v['X'] = 10;
	v['L'] = 50;
	v['C'] = 100;
	v['D'] = 500;
	v['M'] = 1000;

	while (cin >> str) {
		pre = cur = ans = 0;
		for (int i = 0; i < str.size(); i++) {
			cur = v[str[i]];
			switch (cur) {
				case 1:
					ans += pre;
					break;
				case 5:
				case 10:
					ans += COMP(pre, 1);
					break;
				case 50:
				case 100:
					ans += COMP(pre, 10);
					break;
				case 500:
				case 1000:
					ans += COMP(pre, 100);
					break;
			}
			pre = cur;
		}
		ans += pre;
		cout << ans << endl;
	}

	return 0;
}