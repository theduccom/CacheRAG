#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	double ma=0,mi=1e10,t;
	while(cin>>t){
		ma=max(ma,t);
		mi=min(mi,t);
	}
	cout<<ma-mi<<endl;
	return 0;
}