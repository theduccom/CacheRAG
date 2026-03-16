#include<iostream>

using namespace std;

int main() {
	int b[3];
	cin >> b[0] >> b[1] >> b[2];
	if (b[0] + b[1] * 2 + b[2] * 3 >= 3)cout << "Open" << endl;
	else cout << "Close" << endl;
	return 0;
}