#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;

bool a[60000]{};
int main() {
	for (int b = 2; b <60000; b++) {
		if (!(a[b])) {	
			for (int c = b * 2; c <60000; c += b)a[c] = true;
		}
   }
	int e;
	while (cin >> e, e) {
		int s = 0;
		for (int f = 2; f <= e / 2; f++) {
			if (!a[f] && !a[e - f])s++;
		}
		cout << s << endl;
	}
}