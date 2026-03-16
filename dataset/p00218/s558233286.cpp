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
		int M, E, J;
		for(int i = 0; i < N; i++)
		{
			cin >> M >> E >> J;
			char ans;
			if(M == 100 || E == 100 || J == 100) ans = 'A';
			else if((M + E) / 2 >= 90) ans = 'A';
			else if((M + E + J) / 3 >= 80) ans = 'A';
			else if((M + E + J) / 3 >= 70) ans = 'B';
			else if((M + E + J) / 3 >= 50 && (M >= 80 || E >= 80)) ans = 'B';
			else ans = 'C';
			printf("%c\n", ans);
		}
	}
	return 0;
}