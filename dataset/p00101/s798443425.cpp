
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#define pi 3.14159265358979323846264338
using namespace std;

int main() {
	int n;
	cin >> n;
	string sub;
	getchar();
	for (int i = 0; i < n; ++i) {
		string s;
		getline(cin, s);
		for (int j = 0; j < s.size(); ++j) {
			if (s.size() < 7) {
				break;
			}
			sub = s.substr(j, 7);
			if (sub == "Hoshino") {
				s.replace(j, 7, "Hoshina");
			}
		}
		cout << s << endl;
	}
	return 0;
}