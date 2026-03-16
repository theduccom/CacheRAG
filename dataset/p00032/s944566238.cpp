//#define _USE_MATH_DEFINES
//#include <cmath>
#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <iomanip>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//#include <time.h>
//#include <sstream>
//#include <queue>
//#include <map>

using namespace std;


int main(){

	int e1, e2, e3;
	char c;
	int ans1 = 0,ans2 = 0;

	while (cin >> e1 >> c >> e2 >> c >> e3){
		if (e1 == e2) ans2++;

		if (e1 * e1 + e2 * e2 == e3 * e3) ans1++;
	}

	cout << ans1 << endl;
	cout << ans2 << endl;

	return 0;
}