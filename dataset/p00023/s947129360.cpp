#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
	int N;
	cin >> N;
	for(int i = 0;i < N;i++){
		double xa, ya, ra;
		double xb, yb, rb;
		double d, R;

		cin >> xa >> ya >> ra;
		cin >> xb >> yb >> rb;

		d = sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));
		R = fabs(ra-rb);
		if(ra+rb < d){
			cout << "0" << endl;
		}
		else if(ra+rb == d || (R < d && d < ra+rb) || R == d){
			cout << "1" << endl;
		}
		else if(R > d && ra > rb){
			cout << "2" << endl;
		}
		else if(R > d && ra < rb){
			cout << "-2" << endl;
		}

	}

	
	return 0;
}