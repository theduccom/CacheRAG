#include <iostream>
#include <cstdio>
using namespace std;

int K[20][20];
int n,m,a,b,c,d;
int Floyd(int K[20][20],int n) {
	for(int k=0; k<n; ++k) {
		for(int i=0; i<n; ++i) {
			for(int j=0; j<n; ++j) {
				if(K[i][j] > K[i][k] + K[k][j]) {
					K[i][j] = K[i][k] + K[k][j];
				}
			}
		}
	}
	return 0;
}

int main() {
	scanf("%d\n",&n);
	scanf("%d\n",&m);
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			K[i][j] = 100000;
		}
	}
	for(int i=0; i<m; ++i) {
		scanf("%d,%d,%d,%d\n",&a,&b,&c,&d);
		K[a-1][b-1] = c;
		K[b-1][a-1] = d;
	}
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	Floyd(K,n);
	cout << c-d-K[a-1][b-1]-K[b-1][a-1] << endl;
}