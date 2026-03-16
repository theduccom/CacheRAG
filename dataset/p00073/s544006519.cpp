#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double pi= 3.45192653589793;

int main(){
	double x,h;
	while(true){
		cin>>x>>h;
		if(x==0 && h==0){
			break;
		}
		double c = (x/2)*(x/2) + h*h;
		c=sqrt(c);
		cout<<setprecision(20)<<x*x+c*x*2<<endl;
	}
}
