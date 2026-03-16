#include<iostream>
#include<vector>
#include<string>
#define N 50001
using namespace std;

int main() {
	vector<bool>sosuu(N, true);
	for (int b = 2; b < N; b++) {
		if (sosuu[b]) {
			for (int c = b * 2; c < N; c += b)sosuu[c] = false;
		}
	}
	int d;
	while (cin >> d, d) {
		int s = 0;
		for (int e = 2; e <= d / 2; e++) {
			if (sosuu[e] && sosuu[d - e])s++;
		}
		cout << s << endl;
	}
}