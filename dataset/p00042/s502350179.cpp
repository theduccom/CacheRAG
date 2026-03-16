#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
	int dp[1001][1001];
	int w[1001],v[1001],n,W;
	char s;
	int k=1;
	while(1){
		cin>>W>>n;
		if(W==0)break;
		for(int i=0;i<n;i++){
			cin>>v[i]>>s>>w[i];
		}
		memset(dp,0,sizeof(dp));
		for(int i=0;i<n;i++){
			for(int j=0;j<=W;j++){
				if(w[i]>j)dp[i+1][j]=dp[i][j];
				else dp[i+1][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
			}
		}
		cout<<"Case "<<k<<":"<<endl;
		cout<<dp[n][W]<<endl;
        for(int i=0;i<=W;i++){
            if(dp[n][W]==dp[n][i]){
                cout<<i<<endl;;
                break;
            }
        }
		k++;
	}
}