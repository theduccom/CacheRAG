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
	while(cin >> N, N)
	{
		int p, d1, d2;
		int ans_n, ans_d = -1;
		for(int i = 0; i < N; i++)
		{
			cin >> p >> d1 >> d2;
			if(d1 + d2 > ans_d) ans_n = p, ans_d = d1 + d2;
		}
		printf("%d %d\n", ans_n, ans_d);
	}
	return 0;
}