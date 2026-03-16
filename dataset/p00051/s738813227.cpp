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

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string a;
		int mi, ma;
		cin >> a;
		sort(all(a));
		mi = atoi(a.c_str());
		reverse(all(a));
		ma = atoi(a.c_str());
		cout << ma - mi << endl;
	}
}