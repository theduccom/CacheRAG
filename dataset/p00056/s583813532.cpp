#include <iostream>
using namespace std;
#define MAX 1000000
#define MAXL 50005
int dp[3][MAXL];

int main(){
	int n;
	static bool c[MAX]={true, true};
	for(int i = 2;i < MAX;i++){
		if(!c[i]){
			for(int j = 2;i*j < MAX;j++)c[i*j] = true;
		}
	}
	dp[0][0] = 1;
	for(int k = 0;k < 2;k++){
		for(int i = 0;i < MAXL;i++){
			if(!c[i]){
				for(int j = 0;j < MAXL - i;j++){
					if(i >= j)dp[k+1][j+i] += dp[k][j];
				}
			}
		}
	}
	//for(int i = 0;i < 30;i++)cout << dp[2][i];
	while(cin >> n, n){
		cout << dp[2][n] << endl;
	}
	return 0;
}