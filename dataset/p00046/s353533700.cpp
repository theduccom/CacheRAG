#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	
	double x;
	
	cin>>x;
	double M=x,m=x;
	
	while(cin>>x){
		if(M<x)M=x;
		if(m>x)m=x;
	}
	
	cout<<M-m<<endl;
	return 0;
}