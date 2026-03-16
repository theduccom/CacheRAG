#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592;

int main(){
	int n, result;
	double xa, ya, ra, xb, yb, rb;
	cin >> n;
	for ( int i = 0; i < n; ++i ){
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		
		double d = sqrt( pow( xa - xb, 2.0 ) + pow( ya - yb, 2.0 ) );

		if ( d > ra + rb ) result = 0;
		else if ( d < ra - rb ) result = 2;
		else if ( d < rb - ra ) result = -2;
		else result = 1;

		cout << result << endl;
	}

	return 0;
}