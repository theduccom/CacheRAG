
#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> erase_equal(vector<int> v) {
	vector<int> result;
	map<int, bool> mp;
	for (int i = 0; i < v.size(); i++) {
		auto itr = mp.find(v[i]);
		if (itr == mp.end()) {
			mp[v[i]] = true;
			result.push_back(v[i]);
		}
	}
	return result;
}

int main() {
	while (true) {
		int n;
		cin >> n;
		if (n == 0) {
			break;
		}

		map<int, long long> sales;
		vector<int> ids(n);
		for (int i = 0; i < n; i++) {
			int id;
			int sale_val;
			int sale_num;
			cin >> id;
			cin >> sale_val;
			cin >> sale_num;

			ids.push_back(id);
			auto itr = sales.find(id);
			if (itr != sales.end()) {
				sales[id] += (long long)sale_val * (long long)sale_num;
			} else {
				sales[id] = (long long)sale_val * (long long)sale_num;
			}
		}

		vector<int> v = erase_equal(ids);
		bool na_flag = true;
		for (int i = 0; i < v.size(); i++) {
			if (sales[v[i]] >= 1000000) {
				cout << v[i] << endl;
				na_flag = false;
			}
		}
		if (na_flag) {
			cout << "NA" << endl;
		}
	}
}