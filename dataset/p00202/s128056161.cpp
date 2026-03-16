#include<iostream>
#include<vector>
#include<bitset>
#define NMAX 1000001
using namespace std;
int main() {
	vector<char> sosu(NMAX, true);
	for (int i = 2; i < NMAX; ++i) {
		if (sosu[i]) {
			for (int j = i * 2; j < NMAX; j += i) {
				sosu[j] = false;
			}
		}
	}
	
	int num, money;
	while (cin >> num >> money&&num != 0) {
		bitset<NMAX> line;
		line[0] = true;
		for (int i = 0; i < num; ++i) {
			int price;
			cin >> price;
			for (int i = 0, nmax = money - price; i <= nmax; ++i) {
				if (line[i]) {
					line[i + price] = true;
				}
			}
		}
		int ans = -1;
		for (int i = money; i > 0; --i) {
			if (line[i] && sosu[i]) {
				ans = i;
				break;
			}
		}
		if (ans == -1) {
			cout << "NA" << endl;
		}
		else {
			cout << ans << endl;
		}
	}
	return 0;
}