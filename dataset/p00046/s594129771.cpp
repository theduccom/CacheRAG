#include <iostream>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	float max = -1000000000.0f;
	float min = 1000000000.0f;

	float height;

	while (cin >> height) {
		if (height > max) max = height;
		else if (height < min) min = height;
	}
	cout << max - min << endl;
}