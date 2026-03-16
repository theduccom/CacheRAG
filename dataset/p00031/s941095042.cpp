//
//
//
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
const int a[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
vector<int> solve(int n){
	vector<int> ans;
	int res = n;
	while(res != 0){
		for (int i = 0; i < 10; i++) {
			if(n - a[i] < 0){
				continue;
			}
			if((n - a[i]) < res) {
				res = n - a[i];
			}
		}
		ans.push_back(n - res);
		n = res;
	}
	return ans;
}
int main(void) {
	vector<int> ans;
	int n;
	while(cin >> n) {
		ans = solve(n);
		while(ans.size() > 1){
			cout << ans.back() << " ";
			ans.pop_back();
		}
		cout << ans.back() << endl;
	}
	return 0;
}