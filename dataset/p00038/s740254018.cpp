#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>	// require sort next_permutation count __gcd reverse etc.
#include <cstdlib>	// require abs exit atof atoi 
#include <cstdio>		// require scanf printf
#include <functional>
#include <numeric>	// require accumulate
#include <cmath>		// require fabs
#include <climits>
#include <limits>
#include <cfloat>
#include <iomanip>	// require setw
#include <sstream>	// require stringstream 
#include <cstring>	// require memset
#include <cctype>		// require tolower, toupper
#include <fstream>	// require freopen
#include <ctime>		// require srand
#define rep(i,n) for(int i=0;i<(n);i++)
#define ALL(A) A.begin(), A.end()

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const string yaku[] = { "four card", "full house", "straight", "three card", "two pair", "one pair", "null" };

int main()
{
//	cut here before submit 
//	freopen ("testcase.PH", "r", stdin );
	string str = "";
	while (getline (cin, str ) ){
		if (str.empty() ){
			break;
		} // end if
		while (str.find(',') != string::npos ){
			str = str.replace(str.find(','), 1, " ");
		} // end while
		stringstream ss (str );
		vector<int> card (5, 0 );
		map<int,int> cnt; cnt.clear();
		rep (i, 5 ){
			int c;
			ss >> c;
			card[i] = c-1;
			cnt[card[i]]++;			
		} // end rep
		string res = yaku[6];
		map<int,int>::iterator it;
		vector<int> num (5, 0 );
		int i = 0;
		for (it = cnt.begin(); it != cnt.end(); it++ ){
			num[i++] = (*it).second;
		} // end for
		sort (ALL (num ), greater<int>() );
		if (cnt.size() == 2 ){
			if (num[0] == 4 ){
				res = yaku[0];	// four card
			}else{
				res = yaku[1];	// full house
			} // end if
		}else
		if (cnt.size() == 3 ){
			if (num[0] == 3 ){
				res = yaku[3];	// three card
			}else
			if (num[0] == 2 ){
				res = yaku[4];	// two pair
			} // end if
		}else
		if (cnt.size() == 4 ){
			res = yaku[5];		// one pair
		}else{
			sort (ALL (card ), greater<int>() );
			bool ok = true;				
			if (card[0]+1 != 13 ){
				rep (i, 4 ){
					if (card[i] == card[i+1] + 1 ) continue;
					ok = false; break;
				} // end rep
			}else{
				if (card[4] + 1 == 1 ) card[4] = 13;
				sort (ALL (card ), greater<int>() );
				rep (i, 4 ){
					if (card[i] == card[i+1] + 1 ) continue;
					ok = false; break;
				} // end rep
			} // end if
			if (ok ){
				res = yaku[2]; 	// straight
			} // end if
		} // end if
		cout << res << endl; 
	} // end loop

//	printf ("%d\n", res );
		
	return 0;
}