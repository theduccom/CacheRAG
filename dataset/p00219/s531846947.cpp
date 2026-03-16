#include <iostream>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0219

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) break;
		int arr[10] = {0};
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			arr[a]++;
		}
		for (int i = 0; i < 10; i++) {
			if (arr[i] == 0) cout << "-";
			for (int j = 0; j < arr[i]; j++) cout << "*";
			cout << endl;
		}
	}
	return 0;
}