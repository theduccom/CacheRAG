#include<iostream>
#include<string>
using namespace std;
int f1(char c) {
	if (c == '1')return 1;
	else if (c == '2')return 2;
	else if (c == '3')return 3;
	else if (c == '4')return 4;
	else if (c == '5')return 5;
	else if (c == '6')return 6;
	else if (c == '7')return 7;
	else if (c == '8')return 8;
	else if (c == '9')return 9;
	else if (c == '0')return 0;
}
char f2(int f) {
	if (f == 1)return '1';
	else if (f == 2)return '2';
	else if (f == 3)return '3';
	else if (f == 4)return '4';
	else if (f == 5)return '5';
	else if (f == 6)return '6';
	else if (f == 7)return '7';
	else if (f == 8)return '8';
	else if (f == 9)return '9';
	else if (f == 0)return '0';
	else return 'a';
}
void solve() {
	string s, t, ans; cin >> s >> t;
	if (s.size() > t.size()) {
		string tmp = s;
		s = t;
		t = tmp;
	}
	int k = 0;
	for (int i = 1; i <= s.size(); i++){
		int p;
		p = f1(s[s.size() - i]) + f1(t[t.size() - i]) + k;
		if (p > 9) { k = 1; p -= 10; }
		else k = 0;
		ans = f2(p) + ans;
	}
	for (int i = s.size() + 1; i <= t.size(); i++){
		int p = f1(t[t.size() - i]) + k;
		if (p > 9) { k = 1; p -= 10; }
		else k = 0;
		ans = f2(p) + ans;
	}
	if (k == 1)ans = '1' + ans;
	if (ans.size() > 80)cout << "overflow";
	else cout << ans; cout << endl;
	return;
}
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		solve();
	}
}