#include <iostream>
#include <vector>
using namespace std;

#define rep(i,n) for(int i = 0;i < n; i++)

int main() {
	double input;
	vector<double> height;
	while (cin >> input) height.push_back(input);

	rep(i, height.size()) {
		rep(j, height.size() - i) {
			if (height[i + j] > height[i])swap(height[i + j], height[i]);
		}
	}
	cout << height[0] - height.back() << endl;
	return 0;
}