#include<bits//stdc++.h>
using namespace std;
int main(){
	double a,b;
	while(cin>>a>>b,a||b){
		double c=a*a;
		a/=2;
		double d=sqrt(b*b+a*a);
		c+=a*d*4;
		printf("%.10lf\n",c);
	}
}