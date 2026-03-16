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
int sum[10025];

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
//	freopen("testcase.spn", "r", stdin);
	string str = "";

	while (getline (cin, str ) ){
		int n;
		stringstream ss(str);
		ss >> n;
		if (n == 0){
			break;
		} // end if
		int i,j;
		j = 0;
		int sum = 0;
		for (i = 2; ; ++i){
			if (isprime(i) ){
				sum += i;
				++j;
				if (j == n){
					cout << sum << endl;
					break;
				} // end if
			} // end if
		} // end for
	} // end loop

	return 0;
}