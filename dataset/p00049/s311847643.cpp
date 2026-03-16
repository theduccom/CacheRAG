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
#include <map>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	int a=0, b=0, ab=0, o=0;

	char blood[4];
	while(scanf("%*d,%s", blood) != EOF){
		a += !strcmp(blood, "A");
		b += !strcmp(blood, "B");
		ab += !strcmp(blood, "AB");
		o += !strcmp(blood, "O");
	}
	printf("%d\n%d\n%d\n%d\n", a, b, ab, o);

	return 0;
}