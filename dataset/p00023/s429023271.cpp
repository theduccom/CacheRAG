#include<bits/stdc++.h>
using namespace std;
signed main(void){
	ios::sync_with_stdio(false);
	int T;
	cin>>T;
	double x1,x2,y1,y2,r1,r2,d;
	for(int t=1;t<=T;t++){
		cin>>x1>>y1>>r1
		   >>x2>>y2>>r2;
		d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		if(d>r1+r2)
			cout<<0<<endl;
		else if(d<r1-r2)
			cout<<2<<endl;
		else if(d<r2-r1)
			cout<<-2<<endl;
		else
			cout<<1<<endl;
	}
}