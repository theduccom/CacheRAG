#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	double n,a,b;
	vector<double> v;

	while(cin>>n){
		v.push_back(n);
	}

	a=v[0];
	b=v[0];

	for(int i=0;i<v.size();i++){
		a=max(a,v[i]);
		b=min(b,v[i]);
	}

	double ans=a-b;

	cout<<ans<<endl;

}