#include <iostream>
#include <string>
using namespace std;
int dp[20][20];
int main(){
	for(int i=0;i<20;i++)
		for(int j=0;j<20;j++)
			dp[i][j]=-1;
	for(int i=5;i<15;i++)
		for(int j=5;j<15;j++)
			dp[i][j]=0;
	int x,y,s;
	int maxo,zero;
	char z;
	while(cin>>x>>z>>y>>z>>s){
		if(s==1){
			dp[x+5][y+5]++;
			if(dp[x-1+5][y+5]!=-1)
				dp[x-1+5][y+5]++;
			if(dp[x+1+5][y+5]!=-1)
				dp[x+1+5][y+5]++;
			if(dp[x+5][y-1+5]!=-1)
				dp[x+5][y-1+5]++;
			if(dp[x+5][y+1+5]!=-1)
				dp[x+5][y+1+5]++;
		}
		if(s==2){
			for(int i=x-1+5;i<=x+1+5;i++){
				for(int j=y-1+5;j<=y+1+5;j++){
					if(dp[i][j]!=-1)
						dp[i][j]++;
				}
			}
		}
		if(s==3){
			for(int i=x-1+5;i<=x+1+5;i++){
				for(int j=y-1+5;j<=y+1+5;j++){
					if(dp[i][j]!=-1)
						dp[i][j]++;
				}
			}
			if(dp[x-2+5][y+5]!=-1)
				dp[x-2+5][y+5]++;
			if(dp[x+2+5][y+5]!=-1)
				dp[x+2+5][y+5]++;
			if(dp[x+5][y-2+5]!=-1)
				dp[x+5][y-2+5]++;
			if(dp[x+5][y+2+5]!=-1)
				dp[x+5][y+2+5]++;
		}
		maxo=1,zero=0;
		for(int i=0;i<20;i++){
			for(int j=0;j<20;j++){
				if(dp[i][j]>maxo)
					maxo=dp[i][j];
				if(dp[i][j]==0)
					zero++;
			}
		}
	}
	cout<<zero<<endl;
	cout<<maxo<<endl;
	return 0;
}