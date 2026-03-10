#include <iostream>
using namespace std;

int main(void) {
	int ans;
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			ans = i*j;
			cout << i << "x" << j << "=" << ans << endl;
		}
	}

	return 0;
}