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
int main()
{
	while(1)
	{
		int n;
		cin >> n;
		if(n == 0) return 0;
		int cnt[10]={};
		for(int i=0;i<n;i++)
		{
			int a;
			cin >> a;
			cnt[a]++;
		}
		for(int i=0;i<10;i++)
		{
			if(cnt[i] == 0) puts("-");
			else
			{
				for(int j=0;j<cnt[i];j++)
				{
					printf("*");
				}
				puts("");
			}
		}
	}
}