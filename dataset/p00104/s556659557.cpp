#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define o(a) cout<<a<<endl
using namespace std;

int main(){
	int h,w;
	while(1){
		cin>>h>>w;
		if(h==0&&w==0) break;
		char s[101][101];
		//vector<string> s(h);
		rep(i,0,h) rep(j,0,w) cin>>s[i][j];
		int y=0,x=0;
		bool f=0;
		//o(s[0][0]);
		for(int i=0;;i++){
			char c=s[y][x];
			//cout<<c<<endl;
			if(c=='>') x++;
			else if(c=='<') x--;
			else if(c=='^') y--;
			else if(c=='v') y++;
			else if(c=='.'){
				f=1; break;
			}
			//cout<<i<<endl;
			if(i>h*w) break;
		}
		if(f) cout<<x<<" "<<y<<endl;
		else cout<<"LOOP"<<endl;
	}
}