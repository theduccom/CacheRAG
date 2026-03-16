#include "bits/stdc++.h"

using namespace std;

char ToUpper(char cX) { return toupper(cX); }

int main() {
	string str;
	getline(cin, str);
	transform(str.begin(), str.end(), str.begin(), ToUpper);
	cout << str << endl;
}