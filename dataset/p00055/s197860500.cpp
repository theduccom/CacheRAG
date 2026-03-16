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
//	freopen("testcase.seq", "r", stdin);
	string str = "";
	while (getline (cin, str ) ){
		if (str.empty() ){
			break;
		} // end if
		double a0;
		stringstream ss(str);
		ss >> a0;
		double res = 211.*a0/27.;
		printf ("%.9f\n", res );
	} // end loop
		
	return 0;
}