#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	int ca=0, cb=0;
	while (scanf("%d, %d, %d", &a, &b, &c)+1) {
		if ((a*a) + (b*b) == c*c) { ca++; }

		if (a == b) { cb++; }
	}
	printf("%d\n%d\n", ca, cb);
	return 0;
}