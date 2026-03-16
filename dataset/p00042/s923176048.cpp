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
//	freopen("testcase.thief", "r", stdin);
	string str = "";
	int count = 0;

	while (getline (cin, str ) ){
		int max_wight;
		stringstream ssw (str );
		ssw >> max_wight;
		if (max_wight == 0 ){
			break;
		} // end if
		++count;
		
		int n;
		getline (cin, str );
		stringstream ssn(str);
		ssn >> n;

		vector <int> W (n, 0);
		vector <int> V (n, 0);
		vector <int> DP (max_wight+1, 0 );
		int i,j;

		for (i = 0; i < n; ++i){
			getline (cin, str );
			while (str.find(',') != string::npos ){
				str = str.replace(str.find(','), 1, " ");
			} // end while
			stringstream ss(str);
			ss >> V[i] >> W[i];
		} // end for

		for (i = 0; i < n; ++i){
			vector<int> dp = DP;
			for (j = W[i]; j <= max_wight; ++j){
				int p = j - W[i];
				if (dp[p] + V[i] > DP[j] ){
					DP[j] = dp[p] + V[i];
				} // end if 
			} // end for
		} // end for

		int maxvalue = DP[max_wight];
		int minwight = max_wight;

		for (j = max_wight - 1; j >= 0; --j){
			if (DP[j] >= maxvalue){
				minwight = j;
				maxvalue = DP[j];
			} // end if
		} // end for
		cout << "Case " << count << ':' << endl;
		cout << maxvalue << endl;
		cout << minwight << endl;
			
	} // end while	
	
	return 0;
}