#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x,y,z,n,r;
	float r1,r2,r3;
	while(cin>>x>>y>>z,x|y|z){
		r1 = sqrt(x*x+y*y)/2;
		r2 = sqrt(x*x+z*z)/2;
		r3 = sqrt(y*y+z*z)/2;
		for(cin>>n;n;--n){
			cin>>r;
			if(r>r1 || r>r2 || r>r3)cout<<"OK";
			else cout<<"NA";
			cout<<endl;
		}
	}
	return 0;
}