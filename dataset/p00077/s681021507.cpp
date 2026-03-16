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
//	freopen("testcase.runlen", "r", stdin);
	string str = "";
	while (getline (cin, str ) ){
		int len = str.length();
		string res = "";
		int n;
		int i,j;

		i = 0;
		while (i < len){
			if (str[i] != '@'){
				res += str[i];
			}else{
				++i;
				int n = str[i] - '0';
				++i;
				char c = str[i];
				for (j = 0; j < n; ++j){
					res += c;
				} // end for
			} // end if
			++i;
		} // end while
	cout << res << endl;	

	} // end loop

	return 0;
}