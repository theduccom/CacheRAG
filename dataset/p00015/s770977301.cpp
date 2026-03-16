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

string add (string a, string b)
{
	reverse (a.begin(), a.end() );
	reverse (b.begin(), b.end() );

	while (a.length() != b.length()){
		if (a.length() > b.length()){
			b += '0';
		}else if (a.length() < b.length() ){
			a += '0';
		} // end if
	} // end while

	int i;
	string res = "";
	int carry = 0;

	for (i = 0; i < a.length(); ++i){
		int an = a[i] - '0';
		int bn = b[i] - '0';
		if (carry == 1){
			++an;
		} // end if
		if (an + bn >= 10){
			carry = 1;
		}else{
			carry = 0;
		} // end if
		res += ((an + bn) % 10) + '0';
	} // end for

	if (carry == 1){
		res += carry + '0';
	} // end if

	reverse (res.begin(), res.end() );
//	cout << res << endl;
	
	return res;
}
int main()
{
//	cut here before submit 
//	freopen("testcase.nb", "r", stdin);
	string str = "";
	int n;

	getline (cin, str );
	stringstream ssn(str);
	ssn >> n;

	int i;
	for (i = 0; i < n; ++i){
		string a,b;
		string res = "";
		getline (cin, a);
		getline (cin, b);
		res = add (a, b);
		if (res.length() > 80){
			cout << "overflow" << endl;
		}else{
			cout << res << endl;
		} // end if		
	} // end for

	return 0;
}