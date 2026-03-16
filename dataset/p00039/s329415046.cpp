#include <iostream>

using namespace std;

int main() {
	int pre, cur, ans;
	string str;
	while (cin >> str) {
		pre = cur = ans = 0;
		for (int i = 0; i < str.size(); i++) {
			switch (str[i]) {
				case 'I': cur = 1;		break;
				case 'V': cur = 5;		break;
				case 'X': cur = 10;		break;
				case 'L': cur = 50;		break;
				case 'C': cur = 100;	break;
				case 'D': cur = 500;	break;
				case 'M': cur = 1000;	break;
				default:
					cout << "unknown figure" << endl;
					break;
			}
			if (i == 0) {
				pre = cur;
				continue;
			}
			switch (cur) {
				case 1:
					ans += pre;
					pre = cur;
					break;
				case 5:
				case 10:
					if (pre == 1)
						ans -= pre;
					else
						ans += pre;
					pre = cur;
					break;
				case 50:
				case 100:
					if (pre == 10)
						ans -= pre;
					else
						ans += pre;
					pre = cur;
					break;
				case 500:
				case 1000:
					if (pre == 100)
						ans -= pre;
					else
						ans += pre;
					pre = cur;
					break;
			}
		}
		ans += pre;
		cout << ans << endl;
	}

	return 0;
}