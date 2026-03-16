#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;

bool a[150000]{};
int sosuu[10000]{};
int main() {
	int s = 0;
	for (int b = 2; b <= 110000; b++) {
		if (!(a[b])) {
			s++;
			for (int c = b * 2; c <= 150000; c += b)a[c] = true;
			sosuu[s + 1] = sosuu[s] + b;
		}
   }
	int e;
	while (cin >> e, e) {
		cout << sosuu[e + 1] << endl;
	}
}