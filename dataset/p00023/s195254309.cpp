#include <bits/stdc++.h>
using namespace std;

typedef complex<double> P;

int main(){
	int n;
	cin >> n;
	while(n--){
		double x,y,r,X,Y,R;
		cin >> x >> y >> r >> X >> Y >> R;
		double d = hypot(x-X,y-Y);
		if( d+R < r - 1e-9 ) {
			cout << 2 << endl;
		}else if(d+r < R - 1e-9) {
			cout << -2 << endl;
		}else if( d > r + R + 1e-9 ){
			cout << 0 << endl;
		}else{
			cout << 1 << endl;
		}
		
	}
}