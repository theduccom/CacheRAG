#include "bits/stdc++.h"
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int N; cin >> N;
	for (int i = 0; i < N;i++) {
		vector<int> v1(101), v2(101);
		string str1, str2;
		cin >> str1 >> str2;
		for (int j = 0; j < str1.size(); j++) v1[j] = str1[str1.size() - j - 1] - '0';
		for (int j = 0; j < str2.size(); j++) v2[j] = str2[str2.size() - j - 1] - '0';
		for (int j = 0; j < 100;j++) {
			v1[j] += v2[j];
			if (v1[j] >= 10) {
				v1[j] -= 10;
				v1[j + 1]++;
			}
		}
		int dig = 0;
		for (int j = 100; j >= 0; j--) {
			if (v1[j] != 0) {
				dig = j; break;
			}
		}
		if (dig >= 80) cout << "overflow" << endl;
		else {
			for (int j = dig; j >= 0; j--) {
				cout << v1[j];
			}
			cout << endl;
		}
	}
}