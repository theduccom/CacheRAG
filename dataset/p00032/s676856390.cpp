#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <numeric>
#include <cmath>
#include <climits>
#include <limits>
#include <cfloat>
#include <fstream>
using namespace std;

int main()
{
//	cut here before submit 
//	freopen("testcase.pb", "r", stdin);
	string str = "";

	int rect = 0;
	int loze = 0;

	while (getline (cin, str ) ){
		int a, b, c;

		while (str.find(',') != string::npos ){
			str = str.replace(str.find(','), 1, " ");
		} // end while

		stringstream ss(str);
		ss >> a >> b >> c;
		if (a != 0 && b != 0 && c != 0){
			if (a == b){
				++loze;
			} // end if
			if (a*a + b*b == c*c){
				++rect;
			} // end if
		} // end if
	} // end while

	cout << rect << endl;
	cout << loze << endl;
	
	return 0;
}