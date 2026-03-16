#define	_USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
using namespace std;
int main(){
	
	int W,N;
	int k=1;
	while(cin>>W,W!=0){
		cin>>N;
		char comma;
		vector<int> c(N);
		vector<int> weight(N);
		vector< vector<int> >	dp(N+1,vector<int>(W+1));
		vector<	vector<int> >	m(N+1,vector<int>(W+1));
		for(int i=0;i<N;i++){
			cin>>c[i]>>comma>>weight[i];
		}
	
		
		for(int i=0;i<=W;i++){
			dp[N][i]=0;
			m[N][i]=0;
		}
		
		for(int i=N-1;i>=0;i--){
			for(int j=0;j<=W;j++){
				if(j<weight[i])
					dp[i][j]=dp[i+1][j];
				
				else{
				dp[i][j]=max(dp[i+1][j],dp[i+1][j-weight[i]]+c[i]);
				}
			}
		}
		cout<<"Case "<<k++<<":"<<endl;
		cout<<dp[0][W]<<endl;
		for(int i=W;i>=0;i--){
			if(dp[0][W]!=dp[0][i]){
				cout<<i+1<<endl;
				break;
			}
		}
		
		
		
	}
}