#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

double r(double x1,double y1,double x2,double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	
	}

int main() {
	// your code goes here
	int n;
	double x1,x2,y1,y2,r1,r2;
	cin>>n;
	for(int j=0;j<n;j++){
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
		
		if(r(x1,y1,x2,y2)>(r1+r2)){
			cout<<0<<endl;
		}
		else if(r(x1,y1,x2,y2)>=fabs(r1-r2)&&r(x1,y1,x2,y2)<=r1+r2){
			cout<<1<<endl;
		}
		else if(r1>r2){
			cout<<2<<endl;
		}
		else if(r2>r1){
		cout<<-2<<endl;	
		
		}
		
		
	}
	
	return 0;
}