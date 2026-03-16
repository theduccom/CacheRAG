#include <iostream>
#include <cmath>
using namespace std;


int main() {
	double n, r, a, b, c, d, e, f;
	while(1){
	cin >> a >> b >> c;
	if(a == 0 && b == 0 && c == 0) break;
	a *= a; b *= b; c *= c;
	d = sqrt(b + c) / 2;
	e = sqrt(a + c) / 2;
	f = sqrt(a + b) / 2;
        cin >> n;
	for(int i = 0;i < n;++i){
		cin >> r;
		if(d < r || e < r || f < r) cout << "OK" << endl;
		else cout << "NA" << endl;
	    }
	}
	return 0;
}