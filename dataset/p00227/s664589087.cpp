#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
#define pb push_back
int main()
{
	int n,m;
	while(1)
	{
		cin >> n >> m;
		if(n == 0 && m == 0) return 0;
		vector<int>vec;
		for(int i=0;i<n;i++)
		{
			int x; cin >> x; vec.pb(x);
		}
		sort(vec.begin(),vec.end(),greater<int>());
		int res = 0;
		for(int i=0;i<vec.size();i++) if(i%m != m-1) res += vec[i];
		cout << res << endl;
	}
}