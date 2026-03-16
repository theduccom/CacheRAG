#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	double l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,v1,v2;
	char c;
	while(cin>>l1>>c>>l2>>c>>l3>>c>>l4>>c>>l5>>c>>l6>>c>>l7>>c>>l8>>c>>l9>>c>>l10>>c>>v1>>c>>v2){
		double total_l=l1+l2+l3+l4+l5+l6+l7+l8+l9+l10;
		double t=total_l/(v1+v2);
		double pos=v1*t;
		if(pos<=l1) cout << 1 << endl;
		else if (pos<=l1+l2) cout << 2 << endl;
		else if (pos<=l1+l2+l3) cout << 3 << endl;
		else if (pos<=l1+l2+l3+l4) cout << 4 << endl;
		else if (pos<=l1+l2+l3+l4+l5) cout << 5 << endl;
		else if (pos<=l1+l2+l3+l4+l5+l6) cout << 6 << endl;
		else if (pos<=l1+l2+l3+l4+l5+l6+l7) cout << 7 << endl;
		else if (pos<=l1+l2+l3+l4+l5+l6+l7+l8) cout << 8 << endl;
		else if (pos<=l1+l2+l3+l4+l5+l6+l7+l8+l9) cout << 9 << endl;
		else if (pos<=total_l) cout << 10 << endl;
	}
	return 0; 
}