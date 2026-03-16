#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define int long long
signed main(){
	int n;
	scanf("%lld",&n);
	for(int i=0;i<n;i++){
		double xa,ya,ra,xb,yb,rb;
		scanf("%lf %lf %lf %lf %lf %lf",&xa, &ya, &ra, &xb, &yb, &rb);
		double d = sqrt(pow(xa-xb,2)+pow(ya-yb,2));
		if( rb+d < ra ) cout << "2" << endl;
		else if( ra+d < rb ) cout << "-2" << endl;
		else if( d > ra+rb) cout << "0" << endl;
		else cout << "1" << endl;
	}
	return 0;
}