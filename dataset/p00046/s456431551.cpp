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
	double mi, ma, x;
	ma = -1; mi = 99999999999999999;
	while (cin >> x)
	{
		ma = max(ma, x);
		mi = min(mi, x);
	}
	printf("%lf\n", ma - mi);
}