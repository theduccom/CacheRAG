#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solver{
public:
	static void solve() {
		int a, b;
		cin >> a >> b;
		vector<string> res;

		while (a != 0 && b != 0) {
			int cnt = 0;
			for (int i = a; i <= b; i++) {
				if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
					string str("");
					int ii = i;
					while (ii > 0) {
						char c = '0' + ii % 10;
						str = string() + c + str;
						ii /= 10;
					}
					res.push_back(str);
					cnt++;
				}
			}
			if (cnt == 0)res.push_back("NA");
			cin >> a >> b;
			if (a != 0 && b != 0)res.push_back("");
		}

		for (int i = 0; i < res.size(); i++)cout << res[i] << endl;
	}
};

int main() {
	Solver::solve();
}
