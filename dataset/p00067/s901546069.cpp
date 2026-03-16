#include<iostream>
using namespace std;
int m[12][12];
char c[12];
int ans;
int d1[4]={1,0,-1,0};
int d2[4]={0,1,0,-1};
bool valid(int y,int x){
	if(0<=y&&y<12){
		if(0<=x&&x<12){
			if(m[y][x]==1)return true;
		}
	}
	return false;
}
void dfs(int y,int x){
	m[y][x]=0;
	for(int i=0;i<4;i++){
		int ny=y+d1[i],nx=x+d2[i];
		if(valid(ny,nx))dfs(ny,nx);
	}
}
int main(){
	while(1){
		ans=0;
		for(int i=0;i<12;i++){
			if(!(cin>>c))return 0;
			for(int j=0;j<12;j++){
				m[i][j]=(int)(c[j]-'0');
			}
		}
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(valid(i,j)){
					dfs(i,j);
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}