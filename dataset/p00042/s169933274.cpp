#include<iostream>
#include<cstdio>
#include<string.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define max_n 1000
#define max_w 1000
using namespace std;

int N,W;
long long dp[max_n+1][max_w+1];
long long dw[max_n+1][max_w+1];
int w[max_n],v[max_n];

long long rec(int i,int j){
	int res;
	if(dp[i][j]!=-1)return dp[i][j];
	if(i==N){
		res=0;
		dw[i][j]=0;
	}else if(j<w[i]){
		res=rec(i+1,j);
		dw[i][j]=dw[i+1][j];
	}else{
		long long r1=rec(i+1,j);
		long long r2=rec(i+1,j-w[i])+v[i];
		if(r1>r2){
			res=r1;
			dw[i][j]=dw[i+1][j];
		}else if(r2>r1){
			res=r2;
			dw[i][j]=dw[i+1][j-w[i]]+w[i];
		}else{
			if(dw[i+1][j]>(dw[i+1][j-w[i]]+w[i])){
				res=r2;
				dw[i][j]=dw[i+1][j-w[i]]+w[i];
			}else{
				res=r1;
				dw[i][j]=dw[i+1][j];
			}
		}
	}
	return dp[i][j]=res;
}

int main(){
	int p=1;
	while(cin>>W,W){
		cin>>N;
		rep(i,N){
			scanf("%d,%d",&v[i],&w[i]);
		}
		memset(dp,-1,sizeof(dp));
		memset(dw,-1,sizeof(dw));
		cout<<"Case "<<p<<":"<<endl;
		cout<<rec(0,W)<<endl;
		cout<<dw[0][W]<<endl;
		p++;
		/*cout<<"value="<<rec(0,W)<<" cost="<<dw[0][W]<<endl;//????????§??????????????????
		cout<<"cost="<<dw[0][W]<<endl;*/
	}
	return 0;
}