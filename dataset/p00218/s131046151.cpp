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
		int n, pm, pe, pj, sum;
		scanf_s("%d", &n);
		if (n == 0)break;
		for (int i = 0; i < n; ++i) {
			scanf_s("%d %d %d", &pm, &pe, &pj);
			sum = pm + pe + pj;
			if ((pm == 100 || pe == 100) || pj == 100) printf("A\n");
			else if(pm + pe >= 180) printf("A\n");
			else if (sum >= 240) printf("A\n");
			else if (sum >= 210) printf("B\n");
			else if (sum >= 150 && (pm >= 80 || pe >= 80 )) printf("B\n");
			else printf("C\n");
		}
	}
}