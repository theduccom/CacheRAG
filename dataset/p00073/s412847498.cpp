#include <bits/stdc++.h>
#define range(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n) range(i,0,n)
using namespace std;

int main(void){
	int x,h;
	while(cin >> x >> h,x|h){
		double ans=1.0*x*x;
		double hypo=sqrt(0.25*x*x+1.0*h*h);
		ans+=2.0*x*hypo;
		cout.precision(10);
		cout << fixed << ans << endl;
	}
	return 0;
}