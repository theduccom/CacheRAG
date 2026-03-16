#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	double l,h,n;
	bool flag=false;

	while(cin>>n){
		if(!flag){
			l=n;
			h=n;
			flag=true;
		}
		if(h<n)h=n;
		if(l>n)l=n;
	}
	cout<<h-l<<endl;

}