//#define _USE_MATH_DEFINES
//#include <cmath>
#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <iomanip>
#include <vector>
#include <string>
//#include <algorithm>
//#include <functional>
//#include <time.h>
//#include <sstream>
//#include <queue>
//#include <map>

using namespace std;


int main(){

	int m, buf;
	string s ;

	while (cin >> m){
		buf = 1;
		s = "";

		for (int i = 0; i < 10; i++){
			if (m % 2 == 1) {
				cout << s << buf;
				s = " ";
			}
			m >>= 1;
			buf *= 2;
		}
		cout << endl;

	}

	return 0;
}