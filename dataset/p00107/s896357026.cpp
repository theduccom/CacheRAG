#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	int a,b,c,d,x,y,n;
	while(cin>>a>>b>>c,a){
		x=a*a+b*b;
		if(b*b+c*c<x)x=b*b+c*c;
		if(c*c+a*a<x)x=c*c+a*a;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>y;
			if(x<y*y*4)cout<<"OK"<<endl;
			else cout<<"NA"<<endl;
		}
	}
}