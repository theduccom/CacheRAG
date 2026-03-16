#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
	double h,l,a;
	cin>>a;
	h=a;
	l=a;
	while(cin>>a){
		if(a>h)
			h=a;
		if(l>a)
			l=a;
	}
	cout<<fixed<<setprecision(5)<<h-l<<endl;
	return 0;
}