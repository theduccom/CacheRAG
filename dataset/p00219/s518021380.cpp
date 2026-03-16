#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int a, b, c[10] = { 0 }, i, j;
	while (1) {
		cin >> a;
		if (a == 0) 
			return 0;
		for (i = 0; i < a; i++) {
			cin >> b;
			c[b]++;
		}
		for (i = 0; i < 10; i++) {
			for (j = 0; j < c[i]; j++) 
				cout << "*";
			if (j == 0) {
				cout << "-";
			}
			cout << endl;
		}
		memset(c, 0, sizeof(c));
	}
}