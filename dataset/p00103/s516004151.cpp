#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int x[4], n, cnt; string S;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++){
		memset(x, 0, 16);
		while (true) {
			cin >> S;
			if (S == "HIT") {
				x[0] += x[3]; x[3] = 0;
				x[3] += x[2]; x[2] = 0;
				x[2] += x[1]; x[1] = 0;
				x[1] += 1;
			}
			if (S == "OUT") {
				cnt++; if (cnt % 3 == 0) { goto E; }
			}
			if (S == "HOMERUN") {
				x[0] += x[3] + x[2] + x[1] + 1;
				x[3] = 0; x[2] = 0; x[1] = 0;
			}
		}
	E:;
		cout << x[0] << endl;
	}
}