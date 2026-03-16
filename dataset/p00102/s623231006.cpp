#include<iostream>
#include<cstdio>
#define MAX 11
using namespace std;
int main(void){
	while(true){
		int n;
		int Mat[MAX][MAX]={{0,},};
		cin >> n;
		if( n == 0 ) break;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> Mat[i][j];
				Mat[i][n] += Mat[i][j];
				Mat[n][j] += Mat[i][j];
			}
			Mat[n][n] += Mat[i][n];
		}
		for(int i = 0; i < n+1; i++){
			for(int j = 0; j < n+1; j++){
				printf("%5d", Mat[i][j]);
			}
			putchar('\n');
		}
	}
	return 0;
}