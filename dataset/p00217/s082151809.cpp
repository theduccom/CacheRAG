#include <iostream>
using namespace std;

int main() {
	int n,p,d1,d2,mn,md;
	while(cin >> n && n!=0) {
		md=-1;
		for (;n>0;n--) {
			cin >> p >> d1 >> d2;
			if (md<d1+d2) { mn=p; md=d1+d2;}
		}
		cout << mn << ' ' << md << endl;
	}
	return 0;
}