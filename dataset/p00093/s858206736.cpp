#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef pair<int, int>P;

int main() {
	int a, b;
	bool cnt = false;
	while (cin >> a >> b, a | b) {
		bool flag = true;
		if (cnt)cout << endl;
		for (int i = a; i <= b; i++) {
			bool uruu = false;
			if (!(i % 4))uruu = true;
			if (!(i % 100))uruu = false;
			if (!(i % 400))uruu = true;
			if (uruu) {
				flag = false;
				cout << i << endl;
			}
		}
		if (flag)puts("NA");
		cnt = true;
	}
}