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
int hoge(char a[4])
{
	if (a[0] == 'B')return 1;
	if (a[0] == 'O')return 3;
	if (a[1] == 'B')return 2;
	return 0;
}

int main()
{
	int t;
	char a[4];
	int ans[4] = {};
	while (scanf("%d,%s", &t, a) != EOF)
	{
		ans[hoge(a)]++;
		fill(a, a + 4, 0);
	}
	for (int i = 0; i < 4; i++)
	{
		cout << ans[i] << endl;
	}
}