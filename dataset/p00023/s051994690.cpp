#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double xa, ya, ra, xb, yb, rb, r;
	while (n--){
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		r = sqrt((xb - xa)*(xb - xa) + (yb - ya)*(yb - ya));
		if (r > ra + rb) cout << 0 << "\n";
		else if (r + ra < rb) cout << -2 << "\n";
		else if (r + rb < ra) cout << 2 << "\n";
		else if (r <= ra + rb) cout << 1 << "\n";
	}
	return 0;
}