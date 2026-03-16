#include <iostream>
#include <cmath>

using namespace std;




int main(){
	
	int n;
	double xa,xb,ya,yb,ra,rb;
	double d;
	
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		d=sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
		if (d>ra+rb) {
			cout << 0 <<endl;
		}
		else if(ra<rb&&d<rb-ra){
			cout << -2 << endl;
		}
		else if(ra>rb&&d<ra-rb){
			cout << 2 << endl;
		}
		else {
			cout << 1 << endl;
		}
	}
		
	return 0;
}
 