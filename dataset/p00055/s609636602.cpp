#include <iostream>
#include <cstdio>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main() {
	double array[11];
	
	while (cin >> array[1]) {
		rep(i, 9) {
			if ((i + 2) % 2 == 0) {
				array[i + 2] = array[i + 1] * 2;
			}
			else {
				array[i + 2] = array[i + 1] / 3;
			}
		}

		double sum = 0;
		rep(i, 10) {
			sum += array[i + 1];
		}

		printf("%.7f\n",sum);
		
		
	}
}