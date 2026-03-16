#include <string>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>
#include <set>
#include <utility>
#include <algorithm>
#include <numeric>
#include <iostream>

using namespace std;
template<class T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }

int main()
{
	int a,b,c = 0,d = 0,n = 0;
	while(~scanf("%d,%d",&a,&b)) c+=a*b, d+=b,n++;
	printf("%d\n%d\n",c,(int)floor((double)d/n + 0.5));
	return 0;
}