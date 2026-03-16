#include<iostream>
#include<string>
#include<algorithm>	
#include<cmath>
using namespace std;
int main() {
	int n, a, b, c; cin >> a >> b >> c;
	if (c == 1) {
		cout << "Open" << endl;
	}
	else if (a == 1 && b == 1) {
		cout << "Open" << endl;
	}
	else {
		cout << "Close" << endl;
	}
	cin >> n;
}
