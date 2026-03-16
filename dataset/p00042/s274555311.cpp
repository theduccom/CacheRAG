#include <algorithm>
#include <iostream>
using namespace std;
int N,W;
int w[1000];
int c[1000];
char tmp;
int dp[1001];
int main() {
	int tc=1;
	while(cin>>W>>N){
		for(int i=0;i<N;i++){
			cin>>c[i]>>tmp>>w[i];
		}
		fill(dp+0,dp+W+1,0);
		for(int i=0;i<N;i++){
			for(int j=W;j>=0;j--){
				if(j+w[i]>W)continue;
				dp[j+w[i]]=max(dp[j+w[i]],dp[j]+c[i]);
			}
		}
		int mans=*max_element(dp,dp+W+1);
		for(int i=0;i<=W;i++){
			if(mans==dp[i]){
				cout<<"Case "<<tc++<<":"<<endl;
				cout<<mans<<endl;
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}