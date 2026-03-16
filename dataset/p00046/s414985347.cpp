
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() {
	double low = 1000000.0, high = 0.0;
	double n;
	while (cin >> n) {
		if (n < low) {
			low = n;
		}
		if (high < n) {
			high = n;
		}
	}
	cout << high - low << endl;
}