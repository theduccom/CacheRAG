#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int ans;
	double v,y,t;
	while(cin>>v){
		t=v/9.8;
		y=4.9*t*t;
		ans=0;
		while(y>5*ans-5)ans++;
		cout<<ans<<endl;
	}
	return 0;
}