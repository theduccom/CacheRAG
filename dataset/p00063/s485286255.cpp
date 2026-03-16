#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int ans = 0, last;
	while (cin >> input) {
		last = input.size();
		for (int i = 0; i<last; i++) {
			if (input[i] != input[last - i - 1]) { break; }
			if (i == last - 1) { ans++; }
		}
	}
	cout << ans << endl;
	return 0;
}