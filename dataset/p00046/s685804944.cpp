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
//	freopen("testcase.diff", "r", stdin);
	string str = "";
	vector <double> high;

	while (getline (cin, str ) ){
		if (str.empty() ){
			break;
		} // end if
		stringstream ss(str);
		double h;
		ss >> h;
		high.push_back(h);
	} // end while
	
	sort (high.begin(), high.end() );

	double res = high[high.size() - 1] - high[0];

	cout << res << endl;	
		
	return 0;
}