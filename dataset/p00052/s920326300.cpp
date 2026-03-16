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

int d(int x,int n)
{
	int ans = 0;
	while (x%n == 0)
	{
		ans++; x /= n;
	}
	return ans;
}

int main()
{
	int n;
	while (cin >> n&&n)
	{
		int p2=0, p5=0;
		for (int i = 1; i <= n; i++)
		{
			p2 += d(i, 2);
			p5 += d(i, 5);
		}
		cout << min(p5, p2) << endl;

	}

}