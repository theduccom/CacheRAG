#include <iostream>

using namespace std;

int main()
{
	int prnum[50022] = { 0 }, n;

	for (int i = 2; i < 50022; i++) {
		if (!(prnum[i])) {
			for (int j = i*2; j < 50022; j+=i) {
				prnum[j] = 1;
			}
		}
	}

	while (1) {
		cin >> n;
		if (cin.eof()) break;

		for (int i = n-1;; i--) {
			if (!(prnum[i])) {
				cout << i << " ";
				break;
			}
		}
		for (int i = n+1;; i++) {
			if (!(prnum[i])) {
				cout << i << endl;
				break;
			}
		}
	}

}