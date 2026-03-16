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
#include <sstream>
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
/*
bool memo[1000000] = {};
vector<int> pri;

void calc()
{
	for (int i = 2; i < 1000000; i++)
	{
		if (memo[i] == false)
		{
			pri.push_back(i);
			for (int l = i; l < 1000000; l += i)
			{
				memo[l] = true;
			}
		}
	}
}
*/
int main()
{
	double a;
	while (cin >> a)
	{
		printf("%.7lf\n", 633.0 / 81 * a);
	}
}