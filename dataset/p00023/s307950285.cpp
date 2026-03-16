#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double xa,xb,ya,yb,ra,rb;
	int n;
	cin >> n;
	for( int i=0; i<n; i++ ){
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		double range = sqrt( (yb-ya)*(yb-ya)+(xb-xa)*(xb-xa) );
		int ret=1;
		if( rb > range+ra ){
			ret = -2;
		}else if( ra > range+rb ){
			ret = 2;
		}else if( range > ra+rb ){
			ret = 0;
		}
		cout << ret << endl;
	}
	return 0;
}