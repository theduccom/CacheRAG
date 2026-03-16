#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n, m, l;
	int rectangles = 0, lozenges = 0;
	while (scanf("%d,%d,%d", &n, &m, &l) != EOF) {
		if (n * n + m * m == l * l)
			rectangles++;
		else if (n == m)
			lozenges++;
	}
	printf("%d\n%d\n", rectangles, lozenges);
	return 0;
}