#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main(){
	while(true){
		int n;
		cin >> n;
		if(n == 0){ break; }
		vector< vector<int> > mat(n + 1, vector<int>(n + 1));
		for(int i = 0; i < n; ++i){
			int sum = 0;
			for(int j = 0; j < n; ++j){
				cin >> mat[i][j];
				sum += mat[i][j];
			}
			mat[i][n] = sum;
		}
		for(int i = 0; i <= n; ++i){
			int sum = 0;
			for(int j = 0; j < n; ++j){ sum += mat[j][i]; }
			mat[n][i] = sum;
		}
		for(int i = 0; i <= n; ++i){
			for(int j = 0; j <= n; ++j){
				printf("%5d", mat[i][j]);
			}
			puts("");
		}
	}
	return 0;
}