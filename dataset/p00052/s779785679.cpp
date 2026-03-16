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
//	freopen("testcase.fractorial", "r", stdin);
	string str = "";
	while (getline (cin, str ) ){
		stringstream ss(str);
		int n;
		ss >> n;
		if (n == 0){
			break;
		} // end if
		int res = 0;
		while (n > 0){
			res += n/5;
			n /= 5;
		} // end while
		cout << res << endl;
	} // end loop
		
	return 0;
}