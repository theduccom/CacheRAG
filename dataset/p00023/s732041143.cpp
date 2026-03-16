#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin >> N;
	for(int i = 0; i < N; i++) {
		double xa, ya, ra, xb, yb, rb;
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		double distance;
		distance = sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb));
		if(distance > ra + rb) cout << "0" << endl;
		else if(distance < rb - ra && distance > ra - rb) cout << "-2" << endl;
		else if(distance < ra - rb && distance > rb - ra) cout << "2" << endl;
		else cout << "1" << endl;  
	}

	return 0;
}