#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int W;
	int n;


	int cs=0;
	while(cin>>W&&W!=0){
		int v[1001];
		int w[1001];
		
		int dp[1001][1001];
		cin>>n;
		for(int i = 0; i < n; i++){
			char cm;
			cin>>v[i]>>cm>>w[i];
		}

		for(int i = 0; i < n; i++){
			for(int j = 0; j <= 1000; j++){
				if(i==0){
					if(j==w[0]){
						dp[i][j]=v[i];
					}
					else{
						dp[i][j]=0;
					}
				}
				else{
					if(j-w[i]>=0){
						dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
					}
					else{
						dp[i][j]=dp[i-1][j];
					}
				}
			}
		}
		int idx=0;
		int maxNum=-1;
		for(int i = 0; i <= W; i++){
			if(maxNum<dp[n-1][i]){
				maxNum=dp[n-1][i];
				idx=i;
			}
		}
		cout<< "Case " << cs+1 << ':' << endl;
		cout<<maxNum<<endl;
		cout<<idx<<endl;

		cs++;
	}

	return 0;
}