#include <vector>
#include <string>
#include <utility>
#include <iostream>
#include <algorithm>
using namespace std;
using worker_t = pair<string,int>;

int main() {
	while (true) {
		int n; // number of workers
		cin >> n;
		if (n == 0) {
			break;
		}
		vector<worker_t> v;
		while (n--) {
			string i;
			int q,p;
			cin >> i >> q >> p;
			auto w_itr = find_if(v.begin(),v.end(),[i](worker_t w) { return w.first == i; });
			if (w_itr == v.end()) { // if the worker not exist
				v.push_back({i,q*p});
			} else {
				w_itr->second += q*p;
			}
		}
		int count = 0;
		for (auto itr = v.begin();itr != v.end();++itr) {
			if (itr->second >= 1000000) {
				cout << itr->first << endl;
				++count;
			}
		}
		if (count == 0) {
			cout << "NA" << endl;
		}
	}
}