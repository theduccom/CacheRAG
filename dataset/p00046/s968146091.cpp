#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
	double n;
	double x,y;
	cin>>n;
	x=y=n;
	while(cin>>n){
		x=min(x,n);
		y=max(y,n);
	}
	cout<<y-x<<endl;
}