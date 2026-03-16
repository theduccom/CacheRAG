#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	int rec = 0, loz = 0;
	while (scanf("%d,%d,%d", &a, &b, &c) != EOF) {
		if (a * a + b * b == c * c) ++rec;
		else if (a == b && c > 0 && c < a + b) ++loz;
	}
	printf ("%d\n%d\n", rec, loz);
	return 0;
}