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

int main()
{
	char y[4] = "ABC";
	int x[3] = { 1,0,0 };
	char a, b, t;
	while (cin >> a >> t >> b)
	{
		swap(x[a - 'A'], x[b - 'A']);
	}
	for (int i = 0; i < 3; i++)
	{
		if (x[i])
		{
			cout << y[i] << endl;
			return 0;
		}
	}
}