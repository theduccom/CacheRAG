#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;
	int num[11][11];
		
		while(cin >> n,n){
			for(int i=0;i<=n;i++){
				for(int j=0;j<=n;j++){
					num[i][j]=0;
				}
			}
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					cin >> num[i][j];
					num[i][n] += num[i][j];
					num[n][j] += num[i][j];
					num[n][n] += num[i][j];
				}
			}
			for(int i=0;i<=n;i++){
				for(int j=0;j<=n;j++){
					printf("%5d",num[i][j]);
				}
				cout << endl;
			}
	}
	return 0;
}