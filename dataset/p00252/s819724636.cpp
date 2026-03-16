#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	//bool型でやるとうまくいく.
	bool ticket = false;
	//切符が正しいかの判断
	if (a == 0) {
		if (c == 1) {
			ticket = true;
		}
	} 
	else {
		if (b == 1) {
			ticket = true;
		}
	}

	//openかcloseかにする.
	string ans;
	if (ticket == true) ans = "Open";
	else ans = "Close";

	//出力
	cout << ans << endl;
}
