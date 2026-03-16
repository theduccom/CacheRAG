#include<iostream>
#include<queue>
using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		int e;
		long long p, q;
		long long number[4000];
		bool t[4000];
		queue<int>v;
		for (int i = 0;i < 4000;i++) {
			number[i] = 0;
			t[i] = false;
		}

		for (int i = 0;i < n;i++) {
			cin >> e >> p >> q;
			number[e - 1] += p*q;
			
			if (t[e - 1] == false) {
				if (number[e - 1] >= 1000000) {
					v.push(e);
					t[e - 1] = true;
				}
			}
		}

		int a = v.size();
		if (v.empty()) { cout << "NA" << endl; }
		else {
			for (int i = 0;i < a;i++) {
				cout << v.front() << endl;
				v.pop();
			}
		}
	}
	return 0;
}