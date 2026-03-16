#include<iostream>
#include<string>
using namespace std;
string S; int n;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		S = "";
		while (S == "")
		{
			getline(cin, S);
		}
		if (S.size() >= 7) {
			for (int i = 0; i < S.size() - 6; i++) {
				if (S.substr(i, 7) == "Hoshino") {
					S[i + 6] = 'a';
				}
			}
		}
		cout << S << endl;
	}
}