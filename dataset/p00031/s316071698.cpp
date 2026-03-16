#include <iostream>
#include <stack>

using namespace std;

int main() {
	int W;
	while (cin >> W) {
		stack<int> ans;
		for (int i = 512; i >= 1; i /= 2) {
			if (W - i >= 0) {
				W -= i;
				ans.push(i);
			}
			if (W == 0)
				break;
		}
		int ifs = 1;
		while (ans.empty() != true) {
			if (ifs == 0)
				cout << " ";
			cout << ans.top(); ans.pop();
			ifs = 0;
		}
		cout << endl;
	}
	return 0;
}