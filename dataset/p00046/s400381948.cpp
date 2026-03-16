#include "bits/stdc++.h"
using namespace std;

int main(){
	double a;
	double ans=0;
	double ans2=51;
	while(cin>>a){
		ans=max(ans,a);
		ans2=min(ans2,a);
	}
	
	cout<<ans-ans2<<endl;
	return 0;
}