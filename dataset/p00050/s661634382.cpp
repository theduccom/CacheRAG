#include<iostream>
#include<string>
using namespace std;
string S;
int main() {
	getline(cin, S);
	for (int i = 0; i < S.size() - 4; i++) {
		if (S.substr(i, 5) == "apple") {
			S[i] = 'p'; S[i + 1] = 'e'; S[i + 2] = 'a'; S[i + 3] = 'c'; S[i + 4] = 'h';
		}
		else if (S.substr(i, 5) == "peach") {
			S.substr(i, 5) = "apple";
			S[i] = 'a'; S[i + 1] = 'p'; S[i + 2] = 'p'; S[i + 3] = 'l'; S[i + 4] = 'e';
		}
	}
	cout << S << endl;
}