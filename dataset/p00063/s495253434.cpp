#include<iostream>
#include<string>
using namespace std;
string S; int sum;
int main() {
	while (cin >> S) {
		for (int i = 0; i < S.size() / 2; i++) {
			if (S[i] != S[S.size() - 1 - i]) { goto E; }
		}
		sum++;
	E:;
	}
	cout << sum << endl;
}