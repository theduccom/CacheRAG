#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n, n) {
		map<int, long long> data;
		map<int, int> seq;
		for (int i = 0; i < n; ++i) {
			int bangou;
			long long tanka, kazu;
			cin >> bangou >> tanka >> kazu;
			if (data.find(bangou) == data.end()) {
				data[bangou] = 0;
				seq[bangou] = i;
			}
			if (data[bangou] < 1000000)
				data[bangou] += tanka * kazu;
		}
		vector<pair<int, int> > v;
		for (map<int, long long>::iterator it = data.begin(); it != data.end(); ++it)
			if (it->second >= 1000000)
				v.push_back(make_pair(seq[it->first], it->first));
		if (v.empty())
			cout << "NA" << endl;
		else {
			sort(v.begin(), v.end());
			for (int i = 0; i < v.size(); ++i) cout << v[i].second << endl;
		}
	}
	return 0;
}