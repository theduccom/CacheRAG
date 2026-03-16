#include<iostream>
using namespace std;

int main() {
	double min = 1000000, max = 0,num;
	while (cin >> num) {
		if (min > num)min = num;
		if (max < num)max = num;
	}
	cout << max - min;
	return 0;
}