#include<iostream>
#include<string>
using namespace std;
string S, U; int ok, p; char T[11] = "0123456789";
int main() {
	while (cin >> S) {
		ok = 0; U = ""; p = 1;
		for (int i = 0; i < S.size(); i++) {
			if (ok == 1) {
				for (int j = 0; j < 10; j++) {
					if (T[j] == S[i]) {
						p = j;
					}
				}
				ok = 0;
			}
			else if (S[i] == '@') {
				ok = 1;
			}
			else {
				for (int j = 0; j < p; j++) {
					U += S[i];
				}
				p = 1;
			}
		}
		cout << U << endl;
	}
}