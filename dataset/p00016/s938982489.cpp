#include<bits/stdc++.h>
using namespace std;
#define Pi 3.14159265358979323846 
signed main(void){
	double x,y,a=0,b=0,f=Pi/2;
	char c;
	while(cin>>x>>c>>y){
		if(x==0&&y==0)
			break;
		a+=x*cos(f);
		b+=x*sin(f);
		f-=Pi*((double)y/180.0);
	}
	cout<<(int)a<<endl
		<<(int)b<<endl;
}