#include<stdio.h>
using namespace std;

int main() {
	for (int n = 1; n < 10; n++) {
		for (int m = 1; m < 10; m++) {
			printf("%dx%d=%d\n", n, m, n * m);
		}
	}
	return 0;
}
