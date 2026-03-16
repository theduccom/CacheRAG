#include<iostream>
using namespace std;
int main() {
	int n;
	while (cin >> n&&n != 0) {
		int a[10];
		fill(a, a + 10, 0);
		for (int i = 0; i < n; i++) {
			int b;
			cin >> b;
			a[b]++;
		}
		for (int i = 0; i < 10; i++) {
			if (a[i] == 0)
				cout << "-";
			else {
				for (int j = 0; j < a[i]; j++)
					cout << "*";
			}
			cout << endl;
		}
	}
}