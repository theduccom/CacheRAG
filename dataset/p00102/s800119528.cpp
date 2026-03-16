#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n,i,j;
	while(cin >> n && n){
		int table[11][11] = {{0}};
		for(i = 0;i < n;i++){
			for(j = 0;j < n;j++){
				cin >> table[i][j];
				table[i][n] += table[i][j];
				table[n][j] += table[i][j];
			}
			table[n][n] += table[i][n];
		}
		for(i = 0;i <= n;i++){
			for(j = 0;j <= n;j++){
				printf("%5d",table[i][j]);
			}
			cout << "\n";
		}
	}
	return 0;
}