#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
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
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
int main()
{
	string str,tmp;
	int ans=0;
	while(cin >> str)
	{
		tmp=str;
		reverse(tmp.begin(),tmp.end());
		if(str==tmp)ans++;
	}
	cout << ans << endl;
	return 0;
}