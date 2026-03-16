#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n; cin >> n;
	for (int k = 0; k < n; k++){
		char l[10];
		cin >> l;
		int r[8];
		for (int i = 0; i < 8; i++){
			r[i] = l[i] - '0';
		}
		sort(r, r + 8);
		cout << r[7] * 9999999 + r[6] * 999990 + r[5] * 99900 + r[4] * 9000 - r[3] * 9000 - r[2] * 99900 - r[1] * 999990 - r[0] * 9999999;
		cout << endl;
	}
	return 0;
}