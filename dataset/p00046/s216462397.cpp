#include <iostream>

using namespace std;

int main() {
	double height;
	double mini = 10000.0, maxi = 0.0;
	while (cin >> height) {
		mini = min(mini, height);
		maxi = max(maxi, height);
	}
	cout << maxi - mini << endl;
	return 0;
}