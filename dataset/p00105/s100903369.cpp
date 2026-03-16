#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

pair<string, int> S[100000];
int cnt;

int main() {
	while (cin >> S[cnt].first >> S[cnt].second) {
		cnt++;
	}
	sort(S, S + cnt);
	for (int i = 0; i < cnt; i++) {
		if (i >= 1) {
			if (S[i].first == S[i - 1].first) {
				cout << ' ' << S[i].second;
			}
			else {
				cout << endl << S[i].first << endl << S[i].second;
			}
		}
		else {
			cout << S[i].first << endl << S[i].second;
		}
	}
	cout << endl;
	return 0;
}