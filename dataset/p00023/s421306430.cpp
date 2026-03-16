//#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <iomanip>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//#include <time.h>
//#include <sstream>
//#include <queue>

using namespace std;


int main(){

	int n, ans;
	double xa, ya, ra, xb, yb, rb;
	double R;

	cin >> n;

	while (n--){
		cin >> xa >> ya >> ra >> xb >> yb >> rb;

		R = sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb));

		if (R > ra + rb){
			ans = 0;
		}
		else{
			ans = 1;
			if (ra > R + rb)ans = 2;
			if (rb > R + ra)ans = -2;
		}

		cout << ans << endl;

	}

	return 0;
}