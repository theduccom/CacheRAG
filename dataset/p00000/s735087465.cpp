#include <iostream>
using namespace std;

int main() {
	unsigned char b = 0;
	while (b < 81) {
		cout << (b / 9 + 1) << "x" << (b % 9 + 1) << "=" << (b / 9 + 1)*(b % 9 + 1) << endl;
		b++;
	}
	
	return 0;
}