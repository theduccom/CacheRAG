#include<iostream>
#include<cstdio>
using namespace std;

int map[12][12];

int main(){
	int n;
	while(cin >> n, n){
		int solve = 0;
		for(int i=0; i < n; i++){
			for(int j=0; j < n; j++){
				cin >> map[i][j];
			}
		}

		for(int i=0; i < n; i++){
			int total = 0;
			for(int j=0; j < n; j++){
				printf("%5d", map[i][j]);
				total += map[i][j];
			}
			printf("%5d\n", total);
			map[i][n+1] = total;
		}
		for(int j=0; j < n; j++){
			int total = 0;
			for(int i=0; i < n; i++){
				total += map[i][j];
			}
			printf("%5d", total);
			solve += total;
		}
		printf("%5d\n", solve);
	}
}