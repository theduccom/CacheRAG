#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		map<int, string>m;
		for (int i = 0;i < n;i++) {
			string s;
			int a, b;
			cin >> s >> a >> b;
			m.insert(make_pair(a + b, s));
		}
		auto itr = m.rbegin();
		cout << itr->second << ' ' << itr->first << endl;
	}
	return 0;
}