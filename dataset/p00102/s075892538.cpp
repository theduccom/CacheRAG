#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int N;
	while (cin >> N, N) {
		int num[150][150] = { { 0 } };
		for (int i = 0;i<N;i++) {
			for (int j = 0;j<N;j++) {
				cin >> num[i][j];
				num[i][N] += num[i][j];
				num[N][j] += num[i][j];
				num[N][N] += num[i][j];
			}
		}
		for (int i = 0;i <= N;i++) {
			for (int j = 0;j <= N;j++) {
				if (num[i][j]<10) {
					for (int k = 0;k<4;k++)cout << " ";
				}
				else if (num[i][j]<100) {
					for (int k = 0;k<3;k++)cout << " ";
				}
				else if (num[i][j]<1000) {
					for (int k = 0;k<2;k++)cout << " ";
				}
				else if (num[i][j]<10000) {
					for (int k = 0;k<1;k++)cout << " ";
				}
				cout << num[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}