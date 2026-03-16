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
	const char RN[] = { 'Z', 'I', 'V', 'X', 'L', 'C', 'D', 'M' }; //
	const int N[] = { 0, 1, 5, 10, 50, 100, 500, 1000 }; 
//	cut here before submit 
//	freopen("testcase.rf", "r", stdin);
	string str = "";
	map<char, int > Ruman;
	int i;
	int even = 5;
	int odd = 1;

	for (i = 0; i < sizeof(RN)/sizeof(RN[0]); ++i){
		Ruman[RN[i]] = N[i];
	} // end for
//	map<char, int>::iterator it = Ruman.begin();
//	for (; it != Ruman.end(); ++it){
//		cout << (*it).first << ':' << (*it).second << endl;
//	} // end for
		
	while (getline (cin, str ) ){
		if (str.empty() ){
			break;
		} // end if
		int len = str.length();
		str += 'Z';
		int curr = 0;
		int res = 0;

		
		for (i = 0; i < len; ++i){
			if (Ruman[str[i]] < Ruman[str[i+1]] ){
				curr = -Ruman[str[i]];
			}else{
				curr = Ruman[str[i]];
			} // end if
//			cout << "curr: " << curr << endl;
			res += curr;
			
		} // end for
		cout << res << endl;

	} // end while
			
	return 0;
}