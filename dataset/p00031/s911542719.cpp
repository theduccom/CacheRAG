#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <sstream>
#include <cstdio>
#include <stack>
using namespace std;

// Weight(0031)
int main()
{
	int n;
	const int pow2[] = {512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
	while (cin >> n) {
		vector<int> ans;
		for (int i = 0; i < 10; ++i) {
			if (n >= pow2[i]) {
				ans.push_back(pow2[i]);
				n -= pow2[i];
			}
		}
		sort(ans.begin(), ans.end());

		for (int i = 0; i < ans.size()-1; ++i)
			cout << ans[i] << " ";
		cout << ans.back() << endl;
	}
	return 0;
}