#include <iostream>
using namespace std;

int n;
bool pn[10001] = { false };

int main(){
	for (int i = 2; i < 10001; i++) {
		if (!pn[i]) {
			for (int j = i+i; j < 10001; j += i) {
				pn[j] = true;
			}
		}
	}
	while (cin >> n) {
		for (int i = n; i >= 2; i--) {
			if (!pn[i] && !pn[i - 2]) {
				cout << i - 2 << " " << i << endl;
				break;
			}
		}
	}

	return 0;
}