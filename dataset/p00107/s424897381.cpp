#include <iostream>

using namespace std;
/** Problem0107 : Carry a Cheese **/
int main()
{
	int x, y, z, r, n;
	
	while (1) {
		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z==0)
			break;
	
		cin >> n;
		for (int i=0; i<n; i++) {
			cin >> r;
			if (2*r*2*r > x*x+y*y || 4*r*r > x*x+z*z || 4*r*r > y*y+z*z)
				cout << "OK" << endl;
			else
				cout << "NA" << endl;
		}
	}
	return 0;
}