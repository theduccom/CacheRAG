#include<iostream>
#include<string>
using namespace std;
#define CODE 'a'-'A';
int main() {
	string code;
	getline(cin, code);
	for (int i = 0; i < (int)code.size(); ++i) {
		if (code[i] >= 'a'&&code[i] <= 'z') {
			code[i] -= CODE;
		}
		else if (code[i] >= 'A'&&code[i] <= 'Z') {
			code[i] += CODE;
		}
	}
	cout << code << endl;
	return 0;
}