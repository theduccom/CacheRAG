#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int num[100][100] = {{0}};
	int n;
	int i,j;

	while(cin >> n, n){

		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				cin >> num[i][j];
			}
		}

		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				num[i][n] += num[i][j];
				num[n][j] += num[i][j];
				num[n][n] += num[i][j];
			}
		}

		for(i = 0; i <= n; i++){
			for(j = 0; j <= n; j++){
				printf("%5d",num[i][j]);
				num[i][j] = 0; //テ・ツ按敕ヲツ慊淌・ツ個?
			}
			printf("\n");
		}

	}

}