#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	double x, h;

	while ( cin >> x >> h && !( !x && !h ) ){
		cout << setprecision( 6 ) << setiosflags( ios::fixed );
		cout << x * x + 2 * x * sqrt( x * x / 4 + h * h ) << endl;
	}
	return 0;
}