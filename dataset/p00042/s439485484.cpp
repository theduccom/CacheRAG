#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
#define TRESUREMAXNUM 1000
#define TRESUREMAXWEIGHT 1000

int dp[TRESUREMAXNUM+1][TRESUREMAXWEIGHT+1];
struct Tresure{
	int price;
	int weight;
};
Tresure tresureBox[TRESUREMAXNUM+1];
int
main(){
	int W,N;
	for(int i=1;cin>>W&&W;i++){
		memset(dp,-1,sizeof(dp));

		cin>>N;
		cout<<"Case "<<i<<":"<<endl;
		for(int j=1;j<=N;j++){
			char c;
			int w,p;
			cin>>p>>c>>w;
			tresureBox[j].price=p;tresureBox[j].weight=w;
		}
/*		cout<<"---list----"<<endl;
		for(int j=1;j<=N;j++)cout<<tresureBox[j].price<<","<<tresureBox[j].weight<<endl;
		cout<<"-----------"<<endl;*/
		dp[0][0]=0;
		for(int j=0;j<N;j++){
			for(int k=0;k<=W;k++){
				if(dp[j][k]==-1)continue;
				dp[j+1][k]=max(dp[j+1][k],dp[j][k]);

				if(k+tresureBox[j+1].weight<=W)dp[j+1][k+tresureBox[j+1].weight]=max(dp[j+1][k+tresureBox[j+1].weight]
				                                              ,dp[j][k]+tresureBox[j+1].price);
			}
		}
		int maxPrice=-1;
		int maxWeight=-1;
		for(int j=0;j<=W;j++){
			if(dp[N][j]==-1)continue;
			if(maxPrice<dp[N][j]){
				maxPrice=dp[N][j];
				maxWeight=j;
			}
		}
//		cout<<"##ans##"<<endl;
		cout<<maxPrice<<endl<<maxWeight<<endl;
	}
	return 0;
}