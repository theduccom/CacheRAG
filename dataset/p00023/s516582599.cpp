#include <iostream>
#include <cmath>
using namespace std;


int n;
double xa, ya, ra;
double xb, yb, rb;


int solve(){
	double d = (xb-xa)*(xb-xa) + (yb-ya)*(yb-ya);
	
	if((rb-ra)*(rb-ra) <= d && d <= (rb+ra)*(rb+ra)) return 1;
	if((rb+ra)*(rb+ra) < d) return 0;
	if(sqrtl(d) < (ra-rb)) return 2;
	if(sqrtl(d) < (rb-ra)) return -2;
	return 3;
}


int main(){
	cin >> n;
	int i = 0;
	while(cin >> xa >> ya >> ra >> xb >> yb >> rb, i < n){
		cout << solve() << endl;
		i++;
	}

	return 0;
}