#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <stack>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string a, b;
		cin >> a;
		cin >> b;
		if (a.length() > 80 || b.length() > 80) {
			cout << "overflow" << endl;
			continue;
		}

		string result(80, '0');
		int over = 0;
		int j = a.length() - 1;
		int k = b.length() - 1;
		int l = 79;
		for (; l >= 0; --j, --k, --l) {
			int numa = j < 0 ? '0' : a[j];
			int numb = k < 0 ? '0' : b[k];
			int sum = numa + numb - '0' * 2 + over;
			if (sum >= 10) {
				over = 1;
				sum -= 10;
			} else {
				over = 0;
			}
			result[l] = sum + '0';
		}
		if (over == 1) {
			cout << "overflow" << endl;
		} else {
			int j = 0;
			for (; j < result.length() && result[j] == '0'; ++j);
			if (j == result.length()) cout << '0';
			for (; j < result.length(); ++j) cout << result[j];
			cout << endl;
		}
	}

	return 0;
}