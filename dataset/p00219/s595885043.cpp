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

#define MAX 10001

int main()
{
	while (1) {
		int n, x, cou[10] = { 0 };
		char m[10][MAX];
		scanf_s("%d", &n);
		if (n == 0) break;
		for (int i = 0; i < 10; ++i) { m[i][0] = '-'; }
		for (int i = 0; i < n; ++i) {
			scanf_s("%d", &x);
			m[x][cou[x]] = '*';
			++cou[x];
		}
		for (int i = 0; i < 10; ++i) { 
			if (cou[i] == 0)++cou[i];
			m[i][cou[i]] = '\0';
		}
		for (int i = 0; i < 10; ++i) {
			printf("%s\n", m[i]);
		}
	}

}