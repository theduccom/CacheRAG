#include<bits/stdc++.h>
using namespace std;

int dx[5]={0, -1, 0, 1, 0};
int dy[5]={1, 0, 0, 0, -1};
string f[12];

void is(int y, int x){
	f[y][x]='0';
	for(int i=0; i<5; i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(0<=nx&&nx<12&&0<=ny&&ny<12&&f[ny][nx]=='1')is(ny, nx);
	}
	return;
}

int main(){

	while(cin>>f[0]){
		int ans=0;
		for(int i=1; i<12; i++)cin>>f[i];
		for(int y=0; y<12; y++){
			for(int x=0; x<12; x++){
				if(f[y][x]=='1'){
					is(y, x);
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}