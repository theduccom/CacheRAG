#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	double xa,ya,ra,xb,yb,rb;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>xa>>ya>>ra>>xb>>yb>>rb;
		double s=(xa-xb)*(xa-xb)+(ya-yb)*(ya-yb);
		s=(double)sqrt((double)s);
		int t=1;
		if(ra+s<rb)
			t=-2;
		if(rb+s<ra)
			t=2;
		if(s>ra+rb)
			t=0;
		cout<<t<<endl;
	}
	return 0;
}