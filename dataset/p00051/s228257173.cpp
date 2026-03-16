#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

void printv(int v[], int len) {
	for (int i = 0; i < len; i++)
		cout << v[i] << ",";
	cout << endl;
}

int arraytoint(int v[]) {
	int ans = 0;
	int digit = 10000000;
	for (int i = 0; i < 8; i++) {
		ans += v[i] * digit;
		digit /= 10;
	}
	return ans;
}

int solve(string s) {
	char c;
	int seq[8];
	int maxi, mini;
	for (int i = 0; i < 8; i++) {
		c = s[i];
		seq[i] = atoi(&c);
	}
//	printv(seq, 8);
	sort(seq, seq + 8, greater<int>());
	maxi = arraytoint(seq);
	sort(seq, seq + 8);
	mini = arraytoint(seq);
	return maxi - mini;
}

int main() {
	string s;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		cout << solve(s) << endl;
	}
	return 0;
}