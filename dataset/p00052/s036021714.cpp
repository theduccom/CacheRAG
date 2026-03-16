#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main (void) {
	int n, count, c2, c5, res;
	
	for (;;) {
		cin >> n;
		
		if (n == 0) {
			break;
		}
		
		count = 0;
		c2 = 0;
		c5 = 0;
		
		for (int i = 1; i <= n; i ++) {
			int tmp;
			
			tmp = i;
			while (tmp % 2 == 0) {
				c2 ++;
				tmp /= 2;
			}
			
			tmp = i;
			while (tmp % 5 == 0) {
				c5 ++;
				tmp /= 5;
			}
		}
		
		cout << min(c2, c5) << endl;
	}
	
	return 0;
}