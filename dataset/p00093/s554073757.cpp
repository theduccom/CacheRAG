#include<iostream>
#include<vector>
using namespace std;

int leap(int x) {
	int flg=0;
	if (x % 4 == 0) { flg = 1; }
	if (x % 100 == 0) { flg = 0; }
	if (x % 400 == 0) { flg = 1; }

	return flg;
}

int main() {
	int a, b;
	int q = 0;
	vector<int>va;
	while (cin >> a >> b,a,b) {
		q++;
		if (q >= 2) { cout << '\n'; }
		for (int i = a; i <=b; i++) {
			int c = leap(i);
			if (c==1) { va.push_back(i); }
		}
		if (!va.empty()) {
			for (int i = 0; i < va.size(); i++) {
				cout << va[i] << endl;
			}
		}
		else { cout << "NA" << endl; }
		va.erase(va.begin(), va.end());
	}
	return 0;
}