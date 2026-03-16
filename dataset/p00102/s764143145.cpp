#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(){

	int n;
	while(cin>>n&&n!=0){
		int table[20][20];
		for(int i = 0; i < n; i++){
			int sum=0;
			for(int j = 0; j < n; j++){
				cin>>table[i][j];
				sum+=table[i][j];
			}
			table[i][n]=sum;
		}
		for(int j = 0; j <= n; j++){
			//table[n]
			int sum=0;
			for(int i = 0; i < n; i++){
				sum+=table[i][j];
			}
			table[n][j]=sum;
		}
		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= n; j++){
				printf("%5d",table[i][j]);
			}
			cout<<endl;
		}
	}

	return 0;
}