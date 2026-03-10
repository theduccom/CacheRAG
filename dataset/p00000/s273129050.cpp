#include<iostream>
using namespace std;
int main() {
	int i, j,ans;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			ans = j*i;
			cout << i << "x" << j << "=" << ans << endl;
		}
	}
	return 0;
}