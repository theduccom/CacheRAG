#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;

int main(void){
	double x[2],y[2],r[2];
	int n;
	cin >> n;
	rep(i,n){
		rep(j,2) cin >> x[j] >> y[j] >> r[j];
		double D=norm(x[1]-x[0])+norm(y[1]-y[0]);
		double RG=norm(r[1]+r[0]);
		double RL=norm(r[1]-r[0]);
		if(RG<D)
			cout << 0 << endl;
		else if(RL<=D && D<=RG)
			cout << 1 << endl;
		else{
			if(r[0]<r[1])
				cout << -2 << endl;
			else
				cout << 2 << endl;
		}
	}
}