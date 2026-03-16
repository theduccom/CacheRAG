#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
	while (cin >> n) {
		if(!n)break;
		int data[n + 1][n + 1];
		for (int i = 0; i < n; ++i) {
			int tmp=0, sum=0;
			for (int j = 0; j < n; ++j) {
				cin >> tmp;
				data[i][j] = tmp;
				sum += tmp;
			}
			data[i][n] = sum;
		}int sump=0;
		for (int i = 0; i < n; ++i) {
			int summ = 0;
			for (int j = 0; j < n; ++j) {
				summ += data[j][i];
			}
			data[n][i] = summ;
			sump+=summ;
		}data[n][n]=sump;
		for (int i = 0; i <= n; ++i) {
			for (int j = 0; j <= n; ++j) {
				//cout << " " << data[i][j];
				printf("%5d",data[i][j]);
			}
			cout<<endl;
			//printf("\n");
		}
	}
	return 0;
}