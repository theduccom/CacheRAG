#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iostream>

using namespace std;

double dis(long double x1,long double y1,long double x2,long double y2);

int main(){
	long double x1,y1,r1;
	long double x2,y2,r2;
	long double ans;
	double r[2];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x1>>y1>>r1;
		cin>>x2>>y2>>r2;
		
		ans=dis(x1,y1,x2,y2);
		
		if(ans>r1+r2){
			cout<<"0"<<endl;
		}else if(ans<=r1+r2){
				if(r2>ans+r1){
					cout<<"-2"<<endl;
					continue;
				}else if(r1>ans+r2){
					cout<<"2"<<endl;
					continue;
				}
			
			cout<<"1"<<endl;
		}
	
	}
}

double dis(long double x1,long double y1,long double x2,long double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}