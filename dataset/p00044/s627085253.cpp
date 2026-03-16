#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	int n;
	while (cin >> n) {
		bool data[200050] = { 0 };
		for (int j = 4; j < 50200; j = j + 2) {
			data[j] = 1;
		}
		for (int i = 3; i < 50200; i = i + 2) {
			for (int j = 2 * i; j < 50200; j = j + i) {
				data[j] = 1;
			}
		}

		for (int i = n - 1; i >= 2; --i) {
			if (!data[i]) {
				cout << i;
				break;
			}
		}
		for (int i = n + 1; i < 50200; ++i) {
			if (!data[i]) {
				cout << " " << i << endl;
				break;
			}
		}
	}
}