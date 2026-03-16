#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <queue>
#include <climits>
#include <map>
#include <stack>
using namespace std;
#define M_PI 3.141592
#define toRad 2.0*M_PI/360.0
#define inin(x) int x;cin>>x;
#define all(x) x.begin(),x.end()
#define debug(x) cout<<#x<<" "<<x<<endl;
#define rep(i,n) for(int i=0;i<(int)n;i++)
typedef pair<int, int> pii;

int memo[60000] = {};
vector<int> pri;
void calc()
{
	for (int i = 2; i < 60000; i++)
	{
		if (memo[i] == 0)
		{
			pri.push_back(i);
			for (int l = i; l < 60000; l += i)
			{
				memo[l] = 1;
			}
		}
	}
}

int main()
{
	calc();
	int n;
	while (cin >> n)
	{
		cout << *(lower_bound(all(pri), n)-1) << " " << *(upper_bound(all(pri), n)) << endl;
	}
}