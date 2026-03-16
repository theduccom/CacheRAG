#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <map>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	int a, b, c;
	int rect=0, hishi=0;
	while(scanf("%d,%d,%d", &a, &b, &c) != EOF){
		hishi += a==b;
		rect += a*a+b*b==c*c;
	}
	printf("%d\n%d\n", rect, hishi);

	return 0;
}