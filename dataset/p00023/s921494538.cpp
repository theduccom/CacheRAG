#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	while(n > 0){
		double xa, ya, ra;
		double xb, yb, rb;

		cin >> xa >> ya >> ra;
		cin >> xb >> yb >> rb;

		double d = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));

		if(d > ra + rb) cout << 0 << endl;
		else if(ra > rb && d < ra - rb) cout << 2 << endl;
		else if(rb > ra && d < rb - ra) cout << -2 << endl;
		else cout << 1 << endl;
		--n;
	}

	return 0;
}