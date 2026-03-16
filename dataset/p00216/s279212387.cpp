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
#define MAE 4280
#define MAX 100
int main() 
{
	int w, ans = 0, m[5] = { 10,20,30}, n[5] = { 1150,125,140,160 };
	while (1) {
		scanf_s("%d", &w);
		if (w == -1) break;
		ans = n[0];
		if (m[0] < w) ans += (w - m[0] > 10 ? 10 : w - m[0]) * n[1];
		if (m[1] < w) ans += (w - m[1] > 10 ? 10 : w - m[1]) * n[2];
		if (m[2] < w) ans += (w - m[2]) * n[3];
		printf("%d\n", MAE - ans);
	}
}