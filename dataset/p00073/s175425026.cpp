#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	while(1){
		double x,h,s;
		cin>>x>>h;
		if(x==0&&h==0)break;
		s=x*x+2*x*pow((x*x/4+h*h),0.5);
		cout<<fixed<<setprecision(6)<<s<<endl;
	}
}