#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() {
	int n;
	cin >> n;
	string str;
	for (int i = 0; i < n; ++i) {
		int outcount = 0;
		int runner = 0;
		int point = 0;
		while (outcount < 3) {
			cin >> str;
			if (str == "OUT") {
				outcount++;
			}
			if (str == "HIT") {
				if (runner == 3) {
					point++;
				}
				else {
					runner++;
				}
			}
			if (str == "HOMERUN") {
				point++;
				point += runner;
				runner = 0;
			}
		}
		cout << point << endl;
	}
	return 0;
}