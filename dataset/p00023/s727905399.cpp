#include <cmath>
#include <iostream>
using namespace std;




int main(){
    double xa, ya, ra, xb, yb, rb;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
	cin >> xa >> ya >> ra >> xb >> yb >> rb;
	double distance = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
	if (distance > ra + rb) cout << 0;
	else if (distance < ra - rb) cout << 2;
	else if (distance < rb - ra) cout << -2;
	else cout << 1;
	cout << endl;
    }
}