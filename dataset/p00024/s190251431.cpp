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

	const int H = 5;
	double v, t, y;
	long long ans;

	while (cin >> v){
		t = v / 9.8;
		y = 4.9 * t * t;
		ans = (long long)(ceil(y / H)+1);
		cout << ans << endl;
	}


	return 0;
}