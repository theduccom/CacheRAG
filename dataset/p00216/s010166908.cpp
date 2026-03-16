#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)

int main() {
	int w;
	
	while (cin >> w) {
		if (w == -1) break;
		
		int price = 1150;
		
		for_(i,11,w+1) {
			if (i > 10 && i <= 20) price += 125;
			if (i > 20 && i <= 30) price += 140;
			if (i > 30) price += 160;
		}
		
		cout << 4280 - price << endl;
	}
}