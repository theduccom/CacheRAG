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
	int a; char s[10];
	int b[4] = {0};
	while(~scanf("%d,%s",&a,&s)){
		string c(s);
		if(c == "A")b[0]++;
		else if(c == "B")b[1]++;
		if(c == "AB")b[2]++;
		if(c == "O")b[3]++;
	}
	printf("%d\n%d\n%d\n%d\n",b[0],b[1],b[2],b[3]);
}