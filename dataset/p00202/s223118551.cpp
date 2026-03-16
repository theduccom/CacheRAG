#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cassert>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef pair<int,P> P1;
typedef pair<P,P> P2;
typedef long long ll;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 1000000000
#define fi first
#define sc second
#define rep(i,x) for(int i=0;i<x;i++)
bool com[1000005];
int main()
{
	for(int i=2;i<=1000000;i++)
	{
		if(com[i]) continue;
		for(int j=2;i*j<=1000000;j++) com[i*j] = true;
	}
	while(1)
	{
		int n,lim;
		bool dp[1000005]={};
		cin >> n >> lim; if(n==0) return 0;
		int h[35];
		for(int i=0;i<n;i++) cin >> h[i];
		dp[0] = true;
		for(int i=0;i<n;i++)
		{
			for(int j=h[i];j<=lim;j++)
			{
				if(dp[j]) continue;
				if(dp[j-h[i]]) dp[j] = true;
			}
		}
		for(int i=lim;i>=1;i--)
		{
			if(dp[i] && !com[i])
			{
				cout << i << endl; goto end;
			}
		}
		puts("NA"); end:;
	}
}