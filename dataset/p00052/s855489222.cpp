
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		int num;
		int counter = 0;
		for (int i = n; i > 0; --i) {
			num = i;
			while (num % 5 == 0 && num != 0) {
				counter++;
				num /= 5;
			}
		}
		cout << counter << endl;
	}
}