#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
bool isover(int);
bool isover(int,int);
int main() {
	int n; string ans; bool is_str_use;
	string str, str1; int nexta; int memo, age;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		age = 0; ans = ""; is_str_use = false;
		cin >> str >> str1;
		if (isover(str.size(), str1.size())) {
			cout << "overflow" << endl;
			continue;
		}
		for (int i = 0; i < str.size() / 2; ++i) {
			swap(str[i], str[str.size() - 1 - i]);

		}
		for (int i = 0; i < str1.size() / 2; ++i) {
			swap(str1[i], str1[str1.size() - 1 - i]);
		}
		if (str.size() < str1.size()) {
			is_str_use = true;
		}
		for (int i = 0; i < min(str.size(), str1.size()); ++i) {
			memo = (str[i] - '0') + (str1[i] - '0') + age;
			if (memo > 9) {
				age = memo / 10;
				memo -= (memo / 10) * 10;
			}
			else {
				age = 0;
			}
			ans += memo + '0';
		}
		if (str.size() == str1.size()&&age!=0) {
			ans += age + '0';
			age = 0;
		}
		if (isover(ans.size())) {
			cout << "overflow" << endl;
			continue;
		}
		if (is_str_use) {
			swap(str, str1);

		}
		for (int i = min(str.size(), str1.size()); i < str.size(); ++i) {
			memo = (str[i] - '0') + age;
			if (memo > 9) {
				age = memo / 10;
				memo -= (memo / 10) * 10;
			}
			else {
				age = 0;
			}
			ans += memo + '0';
		}
		if (age != 0)ans += age+'0';
		if (isover(ans.size())) {
			cout << "overflow" << endl;
			continue;
		}
		for (int i = 0; i < ans.size() / 2; ++i) {
			swap(ans[i], ans[ans.size() - 1 - i]);
		}
		cout << ans << endl;
	}
	return 0;
}
bool isover(int a) {
	if (a > 80) {
		return true;
	}
	return false;
}
bool isover(int a, int b) {
	if (a > 80 || b > 80) {
		return true;
	}
	return false;
}