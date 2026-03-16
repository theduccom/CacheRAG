#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void) {
	int size[3];

	while (cin >> size[0] >> size[1] >> size[2]) {
		if (size[0] == 0 && size[1] == 0 && size[2] == 0) {
			break;
		}
		std::sort(size, size + 3);

		// 直方体の最小面の対角線
		double diagonal = sqrt(pow(size[0], 2) + pow(size[1], 2));
		int num_entries, r;

		cin >> num_entries;

		for (int i = 0; i < num_entries; i++) {
			cin >> r;
			cout << (r * 2 > diagonal ? "OK" : "NA") << endl;
		}
	}
}