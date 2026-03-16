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
//	freopen("testcase.cl", "r", stdin);
	string str = "";

	int i;
	while (getline (cin, str ) ){
		if ( isupper(str[0]) ){
			cout << "The converted text." << endl;
		}else{
			for (i = 0; i < str.length(); ++i){
				if ( isalpha(str[i]) ){
					str[i] = toupper(str[i]);
				} // end if
			} // end for
			cout << str << endl;
		} // end if
	} // end while
		
	return 0;
}