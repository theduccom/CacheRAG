#include <algorithm>
#include <deque>
#include <functional>
#include <iostream>

using namespace std;

int main() {

	int n, m, j=0, x, min;
	deque<int> p;

	while(cin >> n >> m) {
		if(n==0&&m==0)
			break;
		int a=m-1;
		min=0;
		p.clear();
		for(int i=0; i<n; i++) {
			cin >> x;
			p.push_back(x);
		}
		sort(p.begin(), p.end(), greater<int>());
		for(int i=0; i<p.size(); i++) {
			(i==a) ? a+=m : min+=p[i];
		}
		cout << min << endl;
	}

	return 0;

}