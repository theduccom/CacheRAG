#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	int a, b;
	double total = 0, average = 0, num = 0;
	while (scanf("%d,%d", &a, &b) != EOF) {
		total += a * b;
		average += b;
		num++;
	}
	cout << total << endl;
	cout << lround(average / num) << endl;
	return 0;
}