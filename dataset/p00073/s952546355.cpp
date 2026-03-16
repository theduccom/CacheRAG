#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	int x,h;
	while (cin>>x>>h,x!=0||h!=0) cout<<fixed<<setprecision(6)<<x*x+2*x*sqrt(x*x*.25+h*h)<<endl;
}