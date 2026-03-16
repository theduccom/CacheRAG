#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <set>
#include <stdio.h>
#include <cstdio>
using namespace std;
int n,m,a,b,ab,ba,x1,x2,y1,y2;
int co[20][20];
int main() {
	scanf("%d%d", &n, &m); 
	for (int i=0; i <n;i++) {
		for (int j = 0; j < n;j++) {
			if( i == j ) co[i][j] = 0;
			else co[i][j] = 1000*20;
		}
	}
	for (int i=0; i<m; i++) {
		scanf("%d,%d,%d,%d", &a, &b, &ab, &ba);
		co[a-1][b-1] = ab;
		co[b-1][a-1] = ba;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j< n;j++) {
			for (int k = 0; k < n; k++) {
				if(co[k][j] > co[k][i] + co[i][j] ) 
				co[k][j] = co[k][i] + co[i][j];
			}
		}
	}
	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
	cout  << y1 - y2 - co[x1-1][x2-1] - co[x2-1][x1-1] << endl;
}