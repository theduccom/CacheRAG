#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	string type;
	char comma;
	int a = 0, b = 0, ab = 0, o = 0;
	while (cin >> num >> comma >> type) {
		if (type == "A") {
			a++;
		}
		else if (type == "B") {
			b++;
		}
		else if (type == "AB") {
			ab++;
		}
		else if (type == "O") {
			o++;
		}
	}

	cout << a << endl;
	cout << b << endl;
	cout << ab << endl;
	cout << o << endl;

	return 0;
}