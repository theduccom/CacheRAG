#define _USE_MATH_DEFINES
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<cstring>
#include<stack>
#include<functional>
using namespace std;
const int INF = INT_MAX / 2;

typedef long long ll;

int N;
ll d[10], v[10];

ll GCD(ll a, ll b)
{
	if(b == 0) return a;
	return GCD(b, a % b);
}

ll LCM(ll a, ll b)
{
	return a / GCD(a, b) * b;
}

int main(){
	while(cin >> N, N != -1)
	{
		int ans = 1150;
		if(N > 10) ans += min(10, N - 10) * 125;
		if(N > 20) ans += min(10, N - 20) * 140;
		if(N > 30) ans += (N - 30) * 160;
		printf("%d\n", 4280 - ans);
	}
	return 0;
}