#include<iostream>

using namespace std;

int main(void) {
	double n=0,max=0,min=100;
	while (cin >> n) {
		if (max == 0 && min == 100) {
			max = n;
			min = n;
		}
		else if (max < n) {
			max = n;
		}
		else if (min > n) {
			min = n;
		}
	}
	cout << max - min << endl;
}