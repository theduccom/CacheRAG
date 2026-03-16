#include <stdio.h>
#include <iostream>

using namespace std;

double keisan (double b,int k) {
	if (k == 1) {
		return b;
	} else if (k % 2  == 0){
		return keisan(b*2,k-1);
	} else {
		return keisan(b/3,k-1);
	}
}

int main() {
	double a;
	double b;
	while (cin >> a) {
		b = 0;

		for (int i = 1; i <= 10; i++) {
			b += keisan(a,i);
		}

		printf("%.8f\n",b);
	}
	return 0;
}