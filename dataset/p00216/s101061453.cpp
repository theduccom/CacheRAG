#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int w;
	while (cin >> w, w != -1) {
		int cost = 3130;
		if (w > 30)cost -= 1250 + 1400 + (w - 30) * 160;
		else if (w > 20)cost -= 1250 + (w - 20) * 140;
		else if (w > 10)cost -= (w - 10) * 125;
		cout << cost << endl;
	}
}