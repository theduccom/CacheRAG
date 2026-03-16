#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int n,i,a;
	while (cin >> n) {
		a = 1;
		for (i = 0; i < 10; i++) {
			a *= 2;
			if (n%a != 0) {
				cout << a/2;
				n -= a / 2;
				if (n != 0) {
					cout << " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}