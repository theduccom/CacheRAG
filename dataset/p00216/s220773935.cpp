#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int w;
	while(cin >> w, w >= 0) {
		int sum = 0;
		sum += 1150;
		sum += 125 * max(0,w-10);
		sum += 15 * max(0,w-20);
		sum += 20 * max(0,w-30);
		cout << 4280-sum << endl;
	}
}