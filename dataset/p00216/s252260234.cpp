#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;

int main() {
	int t,n,s,f,sum=0;
	
	while(1){
		cin>>t;
		if(t==-1) break;
		if(t>30) sum=1150+1250+1400+(t-30)*160;
		else if(t>20) sum=1150+1250+(t-20)*140;
		else if(t>10) sum=1150+(t-10)*125;
		else if(t<=10) sum=1150;

        cout<<4280-sum<<endl;

		sum=0;
	}
	return 0;
}