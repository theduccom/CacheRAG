#include <iostream>
#include <iomanip>
#include <string>
#include <string.h>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
#include <deque>
#include <map>

#define ll long long
#define ull unsigned long long
#define mod 1000000007

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if ((a&b) == 1 || c == 1) {
		cout << "Open" << "\n";
	}
	else {
		cout << "Close" << "\n";
	}

	return 0;
}
