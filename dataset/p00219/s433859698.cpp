#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, T[10], x;
	while (cin >> n && n) {
		for (int i = 0; i < 10; i++)
			T[i] = 0;
		for (int i = 0; i < n; i++) {
			cin >> x;
			T[x]++;
		}
		for (int i = 0; i < 10; i++) {
			if (T[i] == 0)
				cout << "-" << endl;
			else {
				for (int j = 0; j < T[i]; j++)
					cout << "*";
				cout << endl;
			}
		}
	}
	return 0;
}