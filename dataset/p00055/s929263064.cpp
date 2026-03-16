#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;

int main(void){
	double a;
	while(cin >> a){
		if(cin.eof()) break;
		double sum=0;
		rep(i,10){
			sum+=a;
			if(i&1)
				a/=3.0;
			else
				a*=2.0;
		}
		cout.precision(10);
		cout << fixed << sum << endl;
	}
	return 0;
}