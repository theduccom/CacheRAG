#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
	int A = 0;
	int B = 0;
	int AB = 0;
	int O = 0;
	string str, waste, data;
	while (cin >> str) {
		replace(str.begin(), str.end(), ',', ' ');
		istringstream iss(str);
		iss >> waste >> data;
		if (data == "A") A++;
		if (data == "B") B++;
		if (data == "AB") AB++;
		if (data == "O") O++;
	}
	cout << A << endl << B << endl << AB << endl << O << endl;
	return 0;
}
