#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct toup {
	char operator()(char c) { return toupper(c); }
};

int main() {
	string str;
	getline(cin, str);
	transform(str.begin(), str.end(), str.begin(), toup());
	cout << str << endl;
	return 0;
}
