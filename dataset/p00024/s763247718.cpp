#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
	
	double v;
	double t,y;
	double N;
	while(cin>>v){
		t=v/9.8;
		y=4.9*pow(t,2.0);
		N = (y+5)/5;
		if(N>(int)N)
			N=N+1;
		cout<<(int)N<<endl;
	
	}
		
	
}