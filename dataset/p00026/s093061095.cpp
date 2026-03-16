#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	int m[20][20]={},x,y,s,X,Y,max=0,ans=0;
	char c;
	while(cin>>x){
		cin>>c>>y>>c>>s;
		X=x+2; Y=y+2;
		m[X][Y]++; m[X+1][Y]++; m[X-1][Y]++;
		m[X][Y-1]++; m[X][Y+1]++;
		if(s==2||s==3){
			m[X-1][Y-1]++; m[X-1][Y+1]++;
			m[X+1][Y-1]++; m[X+1][Y+1]++;
		}
		if(s==3){
			m[X][Y-2]++; m[X][Y+2]++;
			m[X-2][Y]++; m[X+2][Y]++;
		}
	}
	rep(i,2,12){
		rep(j,2,12){
			if(m[i][j]==0) ans++;
			if(m[i][j]>max) max=m[i][j];
		}
	}
	cout<<ans<<endl<<max<<endl;
}