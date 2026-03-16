#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<double> length(10);
	double v1, v2;
	char comma;

	while (cin >> length[0]) {
		for (int i = 1;i <= 9;i++) {
			cin >> comma >> length[i];
		}
		cin >> comma >> v1 >> comma >> v2;

		double total = 0;
		for (int i = 0;i < 10;i++) {
			total += length[i];
		}

		double hit = total / (v1 + v2) * v1;

		for (int i = 0;i < 10;i++) {
			hit -= length[i];
			if (hit <= 0) {
				cout << i + 1 << endl;
				break;
			}
		}
	}

	return 0;
}