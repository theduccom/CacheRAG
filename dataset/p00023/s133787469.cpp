#include <iostream>
#include <cmath>
#define double long double
using namespace std;

int main()
{
	int n;
	double xa, ya, ra, xb, yb, rb;
	
	cin >> n;
	while(n--){
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		//B in A
		if( hypotl(xa - xb, ya - yb) + rb < ra )
			cout << 2 << endl;
		//A in B
		else if( hypotl(xa - xb, ya - yb) + ra < rb )
			cout << -2 << endl;
		//A intersect B
		else if( hypotl(xa - xb, ya - yb) <= ra + rb )
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}