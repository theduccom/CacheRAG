#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdio>
using namespace std;

struct ToUpper {
    char operator()(char c) { return toupper(c); }
};

int main() {
	string str;
	getline(cin, str);

	transform(str.begin(), str.end(), str.begin(), ToUpper());

	cout<<str.c_str()<<endl;
	return 0;
}