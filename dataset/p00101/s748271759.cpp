#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <set>
#include <iostream>
#include <map>
#include <functional>
#include <cstdlib>
#include <numeric>
#include <queue>
#include <complex>
#include <sstream>
#include <stack>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef complex<double> Point;

typedef map<int, pair<int, long long> > mipill;

int main()
{
	int n;
	scanf("%d%*c", &n);
	
	rep(i, n){
		char s[1024];
		fgets(s, 1024, stdin);
		s[strlen(s)-1] = '\0';
		
		string str(s);
		string::size_type index = 0;
		while((index = str.find("Hoshino", index)) != string::npos)
			str[index + 6] = 'a';

		puts(str.c_str());
	}
	return 0;
}