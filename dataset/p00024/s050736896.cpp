#include<iostream>
#include<string>
#include <stdio.h>
#include <math.h>
#include <cctype>
using namespace std;
int main(){
	double n;
	while(cin>>n){
		double t=n/9.8;
		double y=t*t*4.9;
		int ans=ceil((y+5)/5);
		cout<<ans<<endl;
	}
	return 0;

}