#include <iostream>
using namespace std;

int main()
{
	char a, b, c, ans='A';
	while (cin >> a >> c >> b) {
		if (a == 'A' && a == ans) {
			if (b == 'B') {
				ans = 'B';
			}
			if (b == 'C') {
				ans = 'C';
			}
		}
		else if (a == 'B' && a == ans) {
			if (b == 'A') {
				ans = 'A';
			}
			if (b == 'C') {
				ans = 'C';
			}
		}
		else if (a == 'C' && a == ans) {
			if (b == 'A') {
				ans = 'A';
			}
			if (b == 'B') {
				ans = 'B';
			}
		}
		else if (b == 'A' && b == ans) {
			if (a == 'B') {
				ans = 'B';
			}
			if (a == 'C') {
				ans = 'C';
			}
		}
		else if (b == 'B' && b == ans) {
			if (a == 'A') {
				ans = 'A';
			}
			if (a == 'C') {
				ans = 'C';
			}
		}
		else if (b == 'C' && b == ans) {
			if (a == 'A') {
				ans = 'A';
			}
			if (a == 'B') {
				ans = 'B';
			}
		}
	}
	cout << ans << endl;
	return 0;
}