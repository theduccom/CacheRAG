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
	while(scanf("%d", &n), n){
		vi colums(n, 0);
		rep(i, n){
			int row = 0;
			rep(j, n){
				int a;
				scanf("%d", &a);
				printf("%5d", a);
				row += a;
				colums[j] += a;
			}
			printf("%5d\n", row);
		}

		int sum = 0;
		rep(i, n){
			printf("%5d", colums[i]);
			sum += colums[i];
		}
		printf("%5d\n", sum);
	}

	return 0;
}