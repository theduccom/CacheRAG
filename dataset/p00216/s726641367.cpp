#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>
#include <map>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int w;
	while (1) {
		cin >> w;
		if (w == -1)break;
		int sum = 0;
		sum += 1150;
		sum += max(0, min(10, w - 10)) * 125;
		sum += max(0, min(10, w - 20)) * 140;
		sum += max(0, w - 30) * 160;
		cout << 4280 - sum << endl;
	}
	return 0;
}