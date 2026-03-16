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
//	freopen ("testcase.twinprime", "r", stdin );
	string str = "";

	while (getline (cin, str ) ){
		int n;
		stringstream ssn(str);
		ssn >> n;
		if (n == 0 ){
			break;
		} // end if
		int i;

		for (i = n; i >= 5; --i){
			if (isprime(i-2) && isprime(i) ){
				cout << (i-2) << ' ' << i << endl;
				break;
			} // end if
		} // end for
	} // end loop
		
	return 0;
}