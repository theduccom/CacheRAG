#include <iostream>
#include <string>
#define rep(i,n) (int i = 0; i < n; i++)
using namespace std;

int main() {
	int a = 1, b = 0, c = 0;
	string manip;

	while (cin >> manip) {
		if (manip == "A,B" || manip == "B,A") swap(a, b);
		if (manip == "B,C" || manip == "C,B") swap(b, c);
		if (manip == "A,C" || manip == "C,A") swap(c, a);
	}

	if (a)cout << 'A' << endl;
	if (b)cout << 'B' << endl;
	if (c)cout << 'C' << endl;

	return 0;

}