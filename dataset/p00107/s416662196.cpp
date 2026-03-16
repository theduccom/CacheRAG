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
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef complex<double> Point;

int main()
{
	for(;;){
		int length[3];
		rep(i, 3)
			scanf("%d", &length[i]);
		if(length[0]+length[1]+length[2] == 0)
			break;
		sort(length, length+3);
		int l = length[0]*length[0] + length[1]*length[1];

		int n;
		scanf("%d", &n);
		rep(i, n){
			int r;
			scanf("%d", &r);
			puts(r*r*4>l ? "OK" : "NA");
		}
	}
	return 0;
}