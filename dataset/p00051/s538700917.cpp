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

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	int n;
	scanf("%d", &n);

	char str[9];
	rep(i, n){
		scanf(" %s", str);
		sort(str, str+8);
		int low = atoi(str);

		sort(str, str+8, greater<char>());
		int high = atoi(str);
		printf("%d\n", high-low);
	}

	return 0;
}