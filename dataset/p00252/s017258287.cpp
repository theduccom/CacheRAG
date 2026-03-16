#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	getline(cin, s);

	if (s == "1 1 0")cout << "Open" << endl;
	else if (s == "0 0 1")cout << "Open" << endl;
	else cout << "Close" << endl;
	return 0;
}