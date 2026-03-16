#include <algorithm>
#include <cmath>
#include <deque>
#include <iostream>

using namespace std;

int main() {

	int x, y, h;

	while(cin >> x >> y >> h) {
		if(!x&&!y&&!h) {
			break;
		}
		deque<int> c;
		c.push_back(x);
		c.push_back(y);
		c.push_back(h);
		sort(c.begin(), c.end());
		double R=sqrt(pow((double)c[0], 2)+pow((double)c[1], 2));

		int n;
		cin >> n;
		while(n) {
			int r;
			cin >> r;
			cout << (2*r>R ? "OK" : "NA") << endl;
			n--;
		}
	}

	return 0;

}