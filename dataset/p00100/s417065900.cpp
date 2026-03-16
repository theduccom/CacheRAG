#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

typedef long long LL;

int main() {
	int n;
	while (cin >> n && n) {
		vector<LL> v;
		map<LL, LL> m;
		LL no, price, amount;
		int na = 1;
		for (int i = 0; i < n; i++) {
			cin >> no >> price >> amount;
			if (m.find(no) != m.end())
				m[no] += price * amount;
			else {
				m[no] = price * amount;
				v.push_back(no);
			}
		}
		vector<LL>::iterator it = v.begin();
		while (it != v.end()) {
			if (m[*it] >= 1000000) {
				cout << *it << endl;
				na = 0;
			}
			it++;
		}
		if (na)
			cout << "NA" << endl;
	}
	return 0;
}