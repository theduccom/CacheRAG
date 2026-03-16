#include<iostream>
#include <functional>
#include<algorithm>
#include <cmath>
using namespace std;

int main(){
	
	int n;
	double xa,ya,ra;
	double xb,yb,rb;
	double s;
	
	cin>>n;
	while(n>0){
		cin>>xa>>ya>>ra>>xb>>yb>>rb;
		
		s=sqrt(pow(xa-xb,2)+pow(ya-yb,2));
		
		if(s+rb<ra)
			cout<<2<<endl;
		else if(s+ra<rb)
			cout<<-2<<endl;
		else if(s<=ra+rb)
			cout<<1<<endl;
		else
			cout<<0<<endl;
		n--;
	}
	
	
}