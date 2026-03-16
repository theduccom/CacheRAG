#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <bitset>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <fstream>
//#include <tuple>
#include <set>
#include <string.h>
#include <functional>

#define X first
#define Y second
#define MP make_pair
//#define MT make_tuple
#define REP(i, a, n) for(int (i) = (a); (i) < (n); ++(i))
#define FOR(i, n) REP(i, 0, n)
typedef long long ll;
using namespace std;
const int MAX = 500;

template<class T, class U>
void convert(T &t, U &u)
{
	stringstream ss;
	ss << t;
	ss >> u;
}

int main()
{
	string n;
	while ( cin >> n ){
		if ( cin.eof() ) break;

		string ans;

		FOR( i, n.size() ){
			if( n[i] == '@' ){
				FOR(j, n[i + 1] - '0'){
					ans.push_back( n[i + 2] );
				}
				i += 2;
			}
			else{
				ans.push_back( n[i] );
			}
		}

		cout << ans << endl;
	}
	return 0;
}