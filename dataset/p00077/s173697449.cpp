#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	string str;
	while (cin >> str) {
		string ans;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '@') {
				int num = str[i + 1] - '0';
				for (int j = 0; j < num; j++)
					ans += str[i + 2];
				i += 2;
			}
			else {
				ans += str[i];
			}
		}
		cout << ans << endl;
	}
	return 0;
}