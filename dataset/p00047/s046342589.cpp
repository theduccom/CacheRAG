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
//	freopen("testcase.cup2", "r", stdin);
	string str = "";
	int a[] = {1, 0, 0 };

	while (getline (cin, str ) ){
		if (str.empty() ){
			break;
		} // end if
		while (str.find(',') != string::npos ){
			str = str.replace(str.find(','), 1, " ");
		} // end while
		stringstream ss(str);
		char P0, P1;
		ss >> P0 >> P1;
		int p0 = P0 - 'A';
		int p1 = P1 - 'A';
		swap (a[p0], a[p1] );
//		cout << a[0] << ' ' << a[1] << ' ' << a[2] << endl;
	} // end loop

	int i;
	char res = 0;
	for (i = 0; i < 3; ++i){
		if (a[i] == 1){
			res = 'A' + i;
			break;
		} // end if
	} // end for

	cout << res << endl;
		
	return 0;
}