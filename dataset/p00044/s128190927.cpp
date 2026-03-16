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

bool isprime (int n){

	if (n == 0 || n == 1){
		return false;
	}else if (n == 2){
		return true;
	}else if (n % 2 == 0){
		return false;
	} // end if
	
	for (int i = 3; i <= sqrt(n); i+= 2){
		if (n % i == 0){
			return false;
		} // end if
	} // end for
		
	return true;
}

int main()
{
//	cut here before submit 
//	freopen("testcase.p2", "r", stdin);
	string str = "";

	while (getline (cin, str ) ){
		if (str.empty() ){
			break;
		} // end if
		int n;
		stringstream ss(str);
		ss >> n;
		int i;
		int res1 = 0;
		int res2 = 0;

		for (i = n + 1;; ++i){
			if (isprime(i) ){
				res1 = i;
				break;
			} // end if
		} // end for
	
		for (i = n - 1;; --i){			
			if (isprime(i) ){
				res2 = i;
				break;
			} // end if
		} // end for

		cout << res2 << ' ' << res1 << endl;
	} // end for
		
	return 0;
}