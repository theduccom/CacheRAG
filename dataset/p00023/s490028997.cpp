#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin >>n;
	for(int i=0; i<n; i++){
		double a[3],b[3],dis;
		cin >>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2];
		dis = sqrt((b[0]-a[0])*(b[0]-a[0])+(b[1]-a[1])*(b[1]-a[1]));
		if(dis>a[2]+b[2]){cout <<"0"<<endl;}
		else if(dis<abs(a[2]-b[2]) && a[2]>b[2]){cout <<"2"<<endl;}
		else if(dis<abs(a[2]-b[2]) && a[2]<b[2]){cout <<"-2"<<endl;}
		else{cout <<"1"<<endl;}
	}
	return 0;
}