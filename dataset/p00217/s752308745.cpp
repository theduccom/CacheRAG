#define scanf_s scanf
#include <stdio.h>
#include <string>
#include <math.h>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <iostream>
using namespace std;

#define MAX 100000

int main()
{
	while (1) {
		int n, max, maxi = 0, p, d1, d2, d;
		scanf_s("%d", &n);
		if (n == 0)break;
		for (int i = 0; i < n; ++i) {
			scanf_s("%d %d %d", &p, &d1, &d2);
			d = d1 + d2;
			if (i == 0 || max < d) {
				max = d;
				maxi = p;
			}
		}
		printf("%d %d\n", maxi, max);
	}
}