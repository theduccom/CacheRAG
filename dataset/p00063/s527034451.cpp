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
#include <cmath>
#include <map>
#include <stack>
using namespace std;
#define M_PI 3.141592
#define toRad 2.0*M_PI/360.0
#define inin(x) int x;cin>>x;
#define all(x) x.begin(),x.end()
#define debug(x) cout<<#x<<" "<<x<<endl;
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define EPS 1e-12
#define pri_max 60000
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
/*
bool memo[pri_max] = {};
vector<int> pri;
void calc()
{
	for (int i = 2; i < pri_max; i++)
	{
		if (memo[i] == false)
		{
			pri.push_back(i);
			for (int l = i; l < pri_max; l += i)
			{
				memo[l] = true;
			}
		}
	}
}*/
int main()
{
	int ans = 0;
	string a,b;
	while (cin >> a)
	{
		b = a;
		reverse(all(b));
		if (a == b)ans++;
	}
	cout << ans << endl;

}