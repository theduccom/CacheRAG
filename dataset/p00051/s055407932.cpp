#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	string s;
	cin >> q;
	for(int i = 0; i < q; ++i){
		cin >> s;
		sort(s.begin(), s.end());
		int minum = stoi(s);
		sort(s.begin(), s.end(), greater<char>());
		int maxum = stoi(s);
		cout << maxum - minum << endl;
	}
	return 0;
}