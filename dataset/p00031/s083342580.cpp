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
	vector <int> W;
//	cut here before submit 
//	freopen("testcase.w", "r", stdin);
	string str = "";
	int i;
	for (i = 1; i <= 512; i *= 2){
		W.push_back(i);
	} // end for

	sort (W.begin(), W.end(), greater<int>() );
	int size = W.size();

	while (getline (cin, str ) ){
		vector <int> res;
		int wight = 0;
		stringstream ss(str);
		ss >> wight;
	
		for (i = 0; i < size; ++i){
			if (wight < W[i]){
				continue;
			}else if (wight == W[i]){
				res.push_back(W[i]);
				break;
			}else{	// if (wight > W[i])
				res.push_back(W[i]);
				wight -= W[i];
			} // end if
		} // end for

		sort (res.begin(), res.end() );

		for (i = 0; i < res.size(); ++i){
			cout << res[i];
			if (i != res.size() - 1){
				cout << ' ';
			} // end if
		} // end for
		cout << endl;
	} // end while

		
	return 0;
}