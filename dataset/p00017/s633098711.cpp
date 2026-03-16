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
	const string key[] = { "the", "this", "that" };
//	cut here before submit 
//	freopen("testcase.cc", "r", stdin);
	string str = "";
	
	while (getline (cin, str )){
		int len = str.length();
		int i,j;
		vector <bool> match (3, false);

		for (j = 0; j < 26; ++j){
			string curr = str;
			for (i = 0; i < len; ++i){
				if ( isalpha(str[i]) ){
					curr[i] = (str[i] - 'a' + j) % 26 + 'a';
				} // end if
			} // end for
//			cout << "curr: " << curr << endl;

			for (i = 0; i < 3; ++i){
				if ( curr.find(key[i]) != string::npos ){
					match[i] = true;
				} // end if
			} // end for
			if ((int)count(match.begin(), match.end(), true ) > 0){
				cout << curr << endl;
				break;
			} // end if
		} // end for
	} // end while
		
	return 0;
}