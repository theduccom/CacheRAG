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
	char c = 'A',f[10];
	while(~scanf("%s",&f)){
		if(f[0] == c) c = f[2];
		else if(f[2] == c) c = f[0];
	}
	printf("%c\n",c);
}