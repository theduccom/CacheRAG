#include <iostream>
using namespace std;

//0107
int main(){
	int n, x, y, z, r, x2, y2, z2;
	while(cin >> x >> y >> z, x+y+z){
		x2=x*x;
		y2=y*y;
		z2=z*z;

		cin >> n;
		while(n--){
			cin >> r;
			cout << ((4*r*r > min(x2+y2, min(y2+z2, z2+x2))) ? "OK" : "NA");
			cout << endl;
		}
	}
	return 0;
}