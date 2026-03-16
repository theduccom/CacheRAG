#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int x = 0;x < n;x++) {
		string a, b;
		cin >> a >> b;
		int za = a.size();
		int zb = b.size();
		vector<int>v;

		for (int i = 0;i < max(za, zb);i++) {
			if (i < min(za, zb)) {
				int c = za - i - 1;
				int d = zb - i - 1;
				v.push_back((a[za - i - 1] - '0') + (b[zb - i - 1] - '0'));
			}
			else {
				if (za < zb)v.push_back(b[zb - i - 1] - '0');
				else v.push_back((a[za - i - 1]) - '0');
			}
		}
		int z = v.size();
		for (int i = 0;i < v.size();i++) {
			if (i != z- 1 && v[i] >= 10) {
				v[i] -= 10;
				v[i + 1]++;
			}
		}
		if (v.size() > 80)cout << "overflow";
		else if (v.size() == 80 && v[79] >= 10)cout << "overflow";
		else 	for (int i =z - 1;i > -1;i--)cout << v[i];
		cout << endl;
	}
	return 0;
}