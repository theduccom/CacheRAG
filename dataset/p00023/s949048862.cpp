#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double xa, ya, ra, xb, yb, rb;
	int N;
	cin >> N;
	
	for (int i=0; i<N; i++) {
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		
		double D = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
		if ( D > ra + rb ) {
			cout << "0" << endl;
		}
		else if ( abs(ra - rb) <= D ) {
			cout << "1" << endl;
		}
		else {
			if (rb < ra) {
				cout << "2" << endl;
			}
			else {
				cout << "-2" << endl;
			}
		}
	}
	
		
	return 0;
}