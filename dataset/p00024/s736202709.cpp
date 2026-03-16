#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double velocity, time, height;
	int answer;
	while (cin >> velocity) {
		time = velocity / 9.8;
		height = 4.9 * time * time;
		answer = (ceil(height) - 1) / 5 + 2;
		cout << answer << endl;
	}
	return 0;
}