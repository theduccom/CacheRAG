#include <iostream>
#include <utility>
using namespace std;

int main() {
	int n;
	int nums[8];
	
	for (cin >> n; n; --n) {
		unsigned num;
		cin >> num;
		for (int i = 0; i < 8; ++i) {
			nums[i] = num % 10;
			num /= 10;
		}
	
		for (int i = 0; i < 8; ++i) {
			for (int j = i + 1; j; --j) {
				if (nums[j] < nums[j - 1]) {
					swap(nums[j], nums[j - 1]);
				}
			}
		}

		unsigned max = 0;
		unsigned min = 0;
		for (int i = 0; i < 8; ++i) {
			min *= 10;
			min += nums[i];
		}
		for (int i = 7; i >= 0; --i) {
			max *= 10;
			max += nums[i];
		}

		cout << max - min << endl;
	}
	return 0;
}