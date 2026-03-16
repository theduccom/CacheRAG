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

bool isleap (int year )
{
	return ( ( year % 4 == 0 ) && ( ( year % 100 != 0 ) || ( year % 400 == 0 ) ) );
}

int main()
{
	string str = "";
	vector < vector <int> > res;
	int size = 0;
	int i,j;

	while (getline (cin, str ) ){

		int a, b;
		stringstream ss(str);

		ss >> a >> b;

		if (a == 0 && b == 0){
			break;
		} // end if

		++size;
		res.resize(size);

		for (i = a; i <= b; ++i){
			if (isleap (i ) ){
				res[size - 1].push_back (i );
			} // end if
		}

		if (res[size - 1].empty() ){
			res[size - 1].push_back (-1 );
		} // end if

	} // end while

	for (i = 0; i < res.size(); ++i){
		for (j = 0; j < res[i].size(); ++j){
			if (res[i][j] == -1){
				cout << "NA" << endl;
				break;
			}else{
		 		cout << res[i][j] << endl;
			} // end if
		} // end for

		if (i != res.size() - 1){
			cout << endl;
		} // end for

	} // end loop
		
	return 0;
}