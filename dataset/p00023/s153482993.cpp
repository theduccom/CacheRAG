#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n,c;
	double xa,ya,ra,xb,yb,rb,l;
	cin >> n;
	for (n;n>0;n--) {
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
        l=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
        if (l+rb<ra) c=2; else
			if (l+ra<rb) c=-2; else
				if (l>ra+rb) c=0; else c=1;
        cout << c << endl;
	}
	return 0;
	}