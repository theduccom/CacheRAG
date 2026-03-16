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
		int K;
		int cnt[10] = {};
		for(int i = 0; i < N; i++)
		{
			cin >> K;
			cnt[K]++;
		}
		for(int i = 0; i < 10; i++)
		{
			if(cnt[i] == 0) puts("-");
			else
			{
				for(int j = 0; j < cnt[i]; j++)
				{
					printf("*");
				}
				puts("");
			}
		}
	}
	return 0;
}