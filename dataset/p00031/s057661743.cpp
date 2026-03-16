#include <iostream>
#include <vector>
using namespace std;

int main() {
	for (int left; cin >> left;) {
		vector<int> scales;
		for (int right = 512; right; right /= 2) {
			if (left / right) {
				left -= right;
				scales.push_back(right);
			}
		}
		do {
			cout << scales.back();
			scales.pop_back();
			cout << (scales.empty() ? '\n' : ' ');
		} while (!scales.empty());
	}

	return 0;
}