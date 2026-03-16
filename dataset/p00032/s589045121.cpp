#include<bits/stdc++.h>
using namespace std;
int a, b, c;
int ansa, ansb;
int main() {
	while (scanf("%d,%d,%d", &a, &b, &c) != EOF) {

		if (pow(c, 2) == (pow(a, 2) + pow(b, 2))) {
			ansa++;
		} else if (a == b) {
			ansb++;
		}
	}
	cout << ansa << endl;
	cout << ansb << endl;
}