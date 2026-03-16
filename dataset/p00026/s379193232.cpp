#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int a[14][14];
	int i; int ii; int kosuu = 0; int mol = 0;
	for (i = 0; i <= 13; i++){
		for (ii = 0; ii <= 13; ii++){
			a[i][ii] = 0;
		}
	}
	int x = 0; int y = 0; int size = 0;
	while (scanf("%d,%d,%d", &x, &y, &size) > 0){
		int xx = x + 2; int yy = y + 2;

		if (size == 1){
			a[xx][yy] = a[xx][yy] + 1;
			a[xx+1][yy] = a[xx+1][yy] + 1;			a[xx-1][yy] = a[xx-1][yy] + 1;			a[xx][yy+1] = a[xx][yy+1] + 1;			a[xx][yy-1] = a[xx][yy-1] + 1;
		}

		if (size == 2){
			for (i = 0; i <= 2; i++){
				for (ii = 0; ii <= 2; ii++){
					a[xx + i - 1][yy + ii - 1] = a[xx + i - 1][yy + ii - 1] + 1;
				}
			}
		}

		if (size == 3){
			for (i = 0; i <= 2; i++){
				for (ii = 0; ii <= 2; ii++){
					a[xx + i - 1][yy + ii - 1] = a[xx + i - 1][yy + ii - 1] + 1;
				}
			}
			a[xx + 2][yy] = a[xx + 2][yy] + 1;			a[xx - 2][yy] = a[xx - 2][yy] + 1;			a[xx][yy + 2] = a[xx][yy + 2] + 1;			a[xx][yy - 2] = a[xx][yy - 2] + 1;
		}
		/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0026&lang=jp */
	}
	for (i = 2; i <= 11; i++){
		for (ii = 2; ii <= 11; ii++){
			if (a[i][ii] == 0){
				kosuu = kosuu + 1;
			}
			if (a[i][ii] > mol){
				mol = a[i][ii];
			}
		}
	}
	cout << kosuu << endl;
	cout << mol << endl;
	return  0;
}