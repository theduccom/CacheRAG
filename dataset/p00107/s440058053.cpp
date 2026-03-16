#include <iostream>
#include <cmath>
using namespace std;

double h[10000];

int main(){
	int x;
	int y;
	int z;
	int n;
	double xy;
	double yz;
	double zx;
	while ( true ){
		cin >> x >> y >> z;
		if ( !x && !y && !z ){
			break;
		}
		cin >> n;
		for (int  i = 0; i < n; ++i){
			cin >> h[i];
		}
		xy = sqrt( x*x + y*y );
		yz = sqrt( y*y + z*z );
		zx = sqrt( z*z + x*x );
		for (int i = 0; i < n; ++i){
			bool flag = false;
			if( xy < h[i]*2 || yz < h[i]*2 || zx < h[i]*2 ){
				flag = true;
			}
			if ( flag ){
				cout << "OK" << endl;
			} else {
				cout << "NA" << endl;
			}
		}
	}
	return 0;
}