#include "bits/stdc++.h"
using namespace std;

int main(){
	int x,y,s;
	char b;
	int n=10;
	int x1[]={1,0,-1,0};
	int y1[]={0,1,0,-1};
	int x2[]={1,1,-1,-1};
	int y2[]={1,-1,1,-1};
	int x3[]={2,0,-2,0};
	int y3[]={0,2,0,-2};
	
	vector<vector<int> > a(n,vector<int>(n,0));
	while(cin>>x>>b>>y>>b>>s){
		//if(x==-1)break;
		a[x][y]++;
		for(int i=0;i<4;i++){
			if(x+x1[i]>-1&&y+y1[i]>-1&&x+x1[i]<10&&y+y1[i]<10){
				a[x+x1[i]][y+y1[i]]++;
			}
		}
		
		if(s>1){
				for(int i=0;i<4;i++){
				if(x+x2[i]>-1&&y+y2[i]>-1&&x+x2[i]<10&&y+y2[i]<10){
					a[x+x2[i]][y+y2[i]]++;
				}
			}
		}
		
		if(s>2){
				for(int i=0;i<4;i++){
				if(x+x3[i]>-1&&y+y3[i]>-1&&x+x3[i]<10&&y+y3[i]<10){
					a[x+x3[i]][y+y3[i]]++;
				}
			}
		}
	}
	int ans=0;
	int ans2=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(a[i][j]==0)ans++;
			ans2=max(ans2,a[i][j]);
		}
	}
	
	cout<<ans<<endl<<ans2<<endl;
	return 0;
}