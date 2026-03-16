#include <iostream>
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
	int ans = 0;
	string str;
	while (cin >> str) {
		int l = 0;
		int r = str.size()-1;
		bool flag = true;
		while (l <= r) {
			if (str[l] != str[r]) {
				flag = false;
				break;
			}
			l++;
			r--;
		}
		if (flag == true)
			ans++;
	}
	cout << ans << endl;
	return 0;
}