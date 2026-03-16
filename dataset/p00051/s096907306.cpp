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

int stoi (string str )
{
	stringstream ss(str);
	int n;

	ss >>  n;

	return n;
}


int main()
{
//	cut here before submit 
//	freopen("testcase.diff2", "r", stdin);
	string str = "";
	int n;

	getline (cin, str );
	stringstream ssn(str);
	ssn >> n;

	int i;
	for (i = 0; i < n; ++i){
		getline (cin, str );
//		string org = str;
		sort (str.begin(), str.end() );
		string mins = str;
		sort (str.begin(), str.end(), greater<int>() );
		string maxs = str;
		int min = stoi (mins );
		int max = stoi (maxs );
		int res = max - min;
		cout << res << endl;
	} // end loop

		
	return 0;
}