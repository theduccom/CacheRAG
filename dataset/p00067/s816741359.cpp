#include<iostream>
#include<string>
using namespace std;
char dp[12][12];
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
void DFS(int x,int y){
	dp[y][x]='0';
	for(int i=0;i<4;i++){
		if(x+dx[i]>=0&&x+dx[i]<12&&y+dy[i]>=0&&y+dy[i]<12){
			if(dp[y+dy[i]][x+dx[i]]=='1')
			DFS(x+dx[i],y+dy[i]);
		}
	}
	return;
}
int main(){
	while(cin>>dp[0][0]){
		int ans=0;
	for(int i=0;i<12;i++)
		for(int j=0;j<12;j++)
			if(i+j!=0){cin>>dp[i][j];}
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			if(dp[i][j]=='1'){
				ans++;
				DFS(j,i);
			}
		}
	}
	cout<<ans<<endl;
	}
	return 0;
}