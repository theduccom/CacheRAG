#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	int i;
	double h,max=0,min;
	while(scanf("%lf",&h)!=EOF){
		//if(h==0) break;
		i++;
		if(i==1) min=h;
		if(min>h) min=h;
		if(max<h) max=h;
	}
	//cout<<max<<endl;
	//cout<<min<<endl;
	cout<<max-min<<endl;
}