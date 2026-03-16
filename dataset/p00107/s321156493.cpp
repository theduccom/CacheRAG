#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	double d,w,h,n,r,a,b,c,m;
	while(cin>>d>>w>>h,d!=0&&w!=0&&h!=0){
		a=sqrt(d*d+w*w);
        b=sqrt(d*d+h*h);
        c=sqrt(w*w+h*h);
		m=min(a,min(b,c));
		cin>>n;
		while(n--){
			cin>>r;
			r=r*2;
			if(m<r)cout<<"OK\n";
			else cout<<"NA\n";
		}
	}
	return 0;
}