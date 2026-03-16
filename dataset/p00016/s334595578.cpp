#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	double d,r,n=90,x=0,y=0;
	char k;//????????????????????????
	while(1){
		cin>>d>>k>>r;
		if(d==0&&r==0) break;
		x+=d*cos(M_PI*n/180);
		y+=d*sin(M_PI*n/180);
		n-=r;
	}
	cout<<(int)x<<endl<<(int)y<<endl;
}