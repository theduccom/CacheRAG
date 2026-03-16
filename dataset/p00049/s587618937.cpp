#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	int n,x[4]={};
	char b[3];
	while(scanf("%d,%s",&n,b)!=EOF){
		//if(n==0) break;
		if(b[0]=='A'&&b[1]=='B') x[2]++;
		else if(b[0]=='A') x[0]++;
		else if(b[0]=='B') x[1]++;
		else if(b[0]=='O') x[3]++;
	}
	rep(i,0,4){
		cout<<x[i]<<endl;
	}
}