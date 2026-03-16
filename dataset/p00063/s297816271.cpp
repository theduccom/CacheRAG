#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {

	string a;
	int k;
	int counter = 0;


	while (cin >> a) {
		k = a.size();
		counter++;
		while ((double)k >= ((double)a.size() / 2.0)) {
			if (a[a.size()-k] != a[k-1]) {
				counter--;
				break;
			}
			k--;
		}
	}

	cout << counter << endl;

	return 0;
}