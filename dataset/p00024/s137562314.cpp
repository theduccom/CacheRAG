#include "bits/stdc++.h"
using namespace std;

int main(){
	double v;
	while(cin>>v){
		double t=v/9.8;
		double y=t*t*4.9;
		
		cout<<(int)y/5+2<<endl;
	}
	return 0;
}