#include <bits/stdc++.h>
#include <vector>
using namespace std;

double n, r, x1, y4, x2, y2, x3, y3, xa, ya, xb, yb, xc, yc, ma, mb, mc, y_hasil, x_hasil;

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> x1 >> y4 >> x2 >> y2 >> x3 >> y3;
		ma = (x2-x1)/(y4-y2);
		mb = (x3-x2)/(y2-y3);
		mc = (x3-x1)/(y4-y3);
		xa = (x1+x2)/2;
		ya = (y4+y2)/2;
		xb = (x2+x3)/2;
		yb = (y2+y3)/2;
		xc = (x3+x1)/2;
		yc = (y3+y4)/2;
		
	//	cout << ma << " " << xa << " " << mb << " " << xb << " " << yb << " " << ya << "\n";
		if(y4 - y2 == 0){
			x_hasil = (x2 + x1) / 2;
			y_hasil = mb*(x_hasil - xb) + yb;
		}else if(y2 - y3 == 0){
			x_hasil = (x2 + x3) / 2;
			y_hasil = ma*(x_hasil - xa) + ya;
		}else{
			x_hasil = (ma*xa - mb*xb + yb - ya)/(ma - mb);
			y_hasil = ma*(x_hasil - xa) + ya;
		}
		
		r = sqrt((x_hasil - x1)*(x_hasil - x1) + (y_hasil - y4)*(y_hasil - y4));
		
		cout << fixed << setprecision(3) << x_hasil << " " << y_hasil << " " << r << "\n";
	}
	return 0;
}