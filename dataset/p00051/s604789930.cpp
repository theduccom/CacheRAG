#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <complex>
#include <ctime>
#include <cstdlib>

using namespace std;

inline int to_int(string s) {int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string to_str(T x) {ostringstream sout; sout << x; return sout.str();}

typedef long long ll;

int main()
{
	int n,big , small;
	string num;
	cin >> n;
	while(n--)
	{
		cin >> num;
		sort(num.begin(), num.end());
		small = to_int(num);
		sort(num.begin(), num.end(), greater<char>() );
		big = to_int(num);
		cout << big - small << endl;
	}
}