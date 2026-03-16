#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,P> pip;
const int inf=(1<<31)-1;

int W,N,num=0;
char t;
vi v,w,dp;

int main(){
	while(1){
		cin>>W;
		if(!W) break;
		num++;
		cin>>N;
		v=vi(N);
		w=vi(N);
		dp=vi(W+1,0);
		for(int i=0;i<N;i++){
			cin>>v[i]>>t>>w[i];
		}
		for(int i=0;i<N;i++){
			for(int j=W;j>=0;j--){
				if(j-w[i]<0) continue;
				else dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
			}
		}
		cout<<"Case "<<num<<':'<<endl;
		for(int i=W;i>0;i--){
			if(dp[i]!=dp[i-1]){
				cout<<dp[i]<<endl;
				cout<<i<<endl;
				break;
			}
		}
	}
}