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
//	freopen("testcase.blood", "r", stdin);
	string str = "";
	map<string, int> B;

	while (getline (cin, str ) ){
		if (str.empty() ){
			break;
		} // end if
		while (str.find(',') != string::npos ){
			str = str.replace(str.find(','), 1, " ");
		} // end while
		stringstream ss(str);
		int n;
		string blood;
		ss >> n >> blood;
		++B[blood];		
	} // end loop
	vector <int> res (4, 0);
	map <string, int>::iterator it = B.begin();
	int i;

	for (i = 0; it != B.end(); ++it, ++i){
		res[i] = (*it).second;
	} // end for
	
	swap (res[1], res[2]);
	for (i = 0; i < 4; ++i){
		cout << res[i] << endl;	
	} // end for

	return 0;
}