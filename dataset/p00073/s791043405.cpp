#include "bits/stdc++.h"
using namespace std;

int main(){
	while(1){
	double x,h;
	cin>>x>>h;
		if(x==0&&h==0)break;
	double s=2*x*sqrt((x/2)*(x/2)+h*h);
	cout<<fixed<<setprecision(6)<<x*x+s<<endl;
	}
	return 0;
}