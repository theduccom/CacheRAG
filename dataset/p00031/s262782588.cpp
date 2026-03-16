#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	while (cin >> N) {
		vector<int> res;
		for (int i = 0; i < 10; i++) {
			if (N & (1 << i)) {
				res.push_back(1 << i);
			}
		}
		for (int i = 0; i < (int)res.size(); i++) {
			cout << res[i] << " \n"[i + 1 == (int)res.size()];
		}
	}
	return 0;
}