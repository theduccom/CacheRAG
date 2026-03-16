#include <algorithm>
#include <cmath>
#include <deque>
#include <functional>
#include <iostream>

using namespace std;

int main() {

	int n, max, min;
	char s[9];
	deque<int> x;

	cin >> n;
	while(1) {
		if(n==0)
			break;

		x.clear();
		max=min=0;
		cin >> s;
		for(int i=0; i<8; i++) {
			x.push_back((s[i]-'0'));
		}

		sort(x.begin(), x.end(), greater<int>());
		for(int i=0; i<8; i++) {
			max+=x[i]*pow(10, (double)(7-i));
		}
		sort(x.begin(), x.end());
		for(int i=0; i<8; i++) {
			min+=x[i]*pow(10, (double)(7-i));
		}

		cout << max-min << endl;
		n--;
	}

	return 0;

}