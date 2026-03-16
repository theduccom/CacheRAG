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
//	freopen("testcase.pal", "r", stdin);
	string str = "";
	int res = 0;

	while (getline (cin, str ) ){
		if (str.empty() ){
			break;
		} // end if
		int len = str.length();
		
		if (len == 1){
			++res;
			continue;
		} // end if
		int i;

		for (i = 0; i < len/2; ++i){
			if (str[i] == str[len - i - 1]){
				continue;
			}else{
				break;
			} // end if
		} // end for
		if (i == len/2){
			++res;
		} // end if
	} // end loop

	cout << res << endl;	
		
	return 0;
}