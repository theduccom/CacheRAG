#include<iostream>
#include<string>
using namespace std;
string S;
int main() {
	while (getline(cin, S)) {
		for (int h = 0; h < 26; h++) {
			if (S.find("this") != string::npos) {
				goto E;
			}
			if (S.find("that") != string::npos) {
				goto E;
			}
			if (S.find("the") != string::npos) {
				goto E;
			}
			for (int i = 0; i < S.size(); i++) {
				if (S[i] >= 'a') {
					if (S[i] == 'z') {
						S[i] -= 25;
					}
					else {
						S[i]++;
					}
				}
			}
		}
	E:;
		cout << S << endl;
	}
}